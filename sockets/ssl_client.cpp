#include <boost/asio.hpp>
#include <boost/asio/ssl.hpp>
#include <iostream>

using boost::asio::ip::tcp;

int main() {
  try {
    // Step 1: Set up Boost.Asio I/O context and SSL context
    boost::asio::io_context io_context;
    boost::asio::ssl::context ssl_context(boost::asio::ssl::context::sslv23);

    // Step 2: Create an SSL socket
    boost::asio::ssl::stream<tcp::socket> ssl_socket(io_context, ssl_context);

    // Step 3: Resolve the server address and port
    tcp::resolver resolver(io_context);
    auto endpoints = resolver.resolve("localhost", "12345");

    // Step 4: Connect to the server
    boost::asio::connect(ssl_socket.lowest_layer(), endpoints);

    // Step 5: Perform the SSL handshake
    ssl_socket.handshake(boost::asio::ssl::stream_base::client);

    // Step 6: Send a message to the server
    while (true) {
      std::string request;
      std::cin >> request;
      boost::asio::write(ssl_socket, boost::asio::buffer(request));

      // Step 7: Use read_until to get the response from the server
      boost::asio::streambuf response_buffer;
      boost::system::error_code error;
      size_t bytes_read =
          boost::asio::read_until(ssl_socket, response_buffer, "\n", error);

      if (error && error != boost::asio::error::eof) {
        std::cerr << "Error reading response: " << error.message() << std::endl;
      } else {
        std::istream response_stream(&response_buffer);
        std::string reply;
        std::getline(response_stream, reply);
        std::cout << "Reply from server: " << reply << std::endl;
      }
    }
    // Step 8: Shutdown the connection cleanly
    ssl_socket.shutdown();
  } catch (std::exception& e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  return 0;
}
