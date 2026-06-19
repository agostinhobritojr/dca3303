#include <boost/asio.hpp>
#include <boost/asio/ssl.hpp>
#include <iostream>
#include <memory>

using boost::asio::ip::tcp;

// Function to handle a client connection
void handle_client(
    std::shared_ptr<boost::asio::ssl::stream<tcp::socket>> ssl_stream) {
  try {
    // Perform SSL handshake
    ssl_stream->handshake(boost::asio::ssl::stream_base::server);

    // Reading data from client
    char data[1024] = {0};
    boost::system::error_code error;
    while (true) {
      size_t length = ssl_stream->read_some(boost::asio::buffer(data), error);

      if (error == boost::asio::error::eof) {
        std::cout << "Connection closed by client." << std::endl;
        break;
      } else if (error) {
        throw boost::system::system_error(error);
      }

      std::cout << "Received: " << std::string(data, length) << std::endl;

      // Writing response to client
      std::string response = "Hello from SSL server!\n";
      boost::asio::write(*ssl_stream, boost::asio::buffer(response), error);
    }
  } catch (std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }
}

int main(int argc, char *argv[]) {
  try {
    // Setting up Boost.Asio context and SSL context
    boost::asio::io_context io_context;
    boost::asio::ssl::context ssl_context(boost::asio::ssl::context::sslv23);

    // Load SSL certificate and private key
    ssl_context.use_certificate_chain_file("server.crt");
    ssl_context.use_private_key_file("server.key",
                                     boost::asio::ssl::context::pem);

    // Setting up TCP acceptor to listen for client connections
    tcp::acceptor acceptor(io_context, tcp::endpoint(tcp::v4(), 12345));

    while (true) {
      // Accepting client connections
      auto socket = std::make_shared<tcp::socket>(io_context);
      acceptor.accept(*socket);

      // Creating an SSL stream and passing it to handle_client function
      auto ssl_stream = std::make_shared<boost::asio::ssl::stream<tcp::socket>>(
          std::move(*socket), ssl_context);
      handle_client(ssl_stream);
    }
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  return 0;
}
