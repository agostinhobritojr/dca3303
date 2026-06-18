#include <boost/asio.hpp>
#include <boost/asio/ssl.hpp>
#include <iostream>
#include <memory>
#include <thread>
#include <vector>

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
    size_t length;
    // le os dados da conexao
    while (length = ssl_stream->read_some(boost::asio::buffer(data), error)) {
      // caso a conexao tenha sido finalizada
      if (error == boost::asio::error::eof) {
        std::cout << "Connection closed by client." << std::endl;
      } else if (error) {
        throw boost::system::system_error(error);
      }

      std::cout << "Received (" << std::this_thread::get_id()
                << "): " << std::string(data, length) << std::endl;

      // Writing response to client
      std::string response = "Alo! Servidor SSL respondendo!\n";
      boost::asio::write(*ssl_stream, boost::asio::buffer(response), error);
    }
    // Ensure the data is properly flushed and shut down the SSL connection
    ssl_stream->shutdown();
  } catch (std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }
}

// Function to accept client connections
void accept_connections(tcp::acceptor &acceptor,
                        boost::asio::ssl::context &ssl_context) {
  try {
    while (true) {
      // Accept incoming connection
      auto socket = std::make_shared<tcp::socket>(acceptor.get_executor());
      acceptor.accept(*socket);

      // Create an SSL stream for the connection
      auto ssl_stream = std::make_shared<boost::asio::ssl::stream<tcp::socket>>(
          std::move(*socket), ssl_context);

      // Handle the client in a new thread
      std::thread(handle_client, ssl_stream).detach();
    }
  } catch (std::exception &e) {
    std::cerr << "Exception in accept thread: " << e.what() << std::endl;
  }
}

int main(int argc, char *argv[]) {
  try {
    // Step 1: Set up Boost.Asio context and SSL context
    boost::asio::io_context io_context;
    boost::asio::ssl::context ssl_context(boost::asio::ssl::context::sslv23);

    // Load SSL certificate and private key
    ssl_context.use_certificate_chain_file("server.crt");
    ssl_context.use_private_key_file("server.key",
                                     boost::asio::ssl::context::pem);

    // Step 2: Set up TCP acceptor to listen for client connections
    tcp::acceptor acceptor(io_context, tcp::endpoint(tcp::v4(), 12345));

    // Step 3: Create a thread pool to handle multiple connections
    unsigned int thread_pool_size = std::thread::hardware_concurrency();
    std::cout << "Starting server with " << thread_pool_size << " threads"
              << std::endl;
    std::vector<std::thread> thread_pool;

    // Each thread runs the io_context's event loop
    for (unsigned int i = 0; i < thread_pool_size; ++i) {
      thread_pool.emplace_back([&io_context] { io_context.run(); });
    }

    // Step 4: Accept connections in the main thread
    accept_connections(acceptor, ssl_context);

    // Step 5: Join all threads (optional: since each thread will run until
    // program is stopped)
    for (auto &thread : thread_pool) {
      if (thread.joinable()) {
        thread.join();
      }
    }

  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  return 0;
}
