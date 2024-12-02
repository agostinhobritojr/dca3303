#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main(void) {
  std::ifstream in("input.txt");

  std::string line;

  while (getline(in, line)) {
    std::stringstream ss(line);
    std::string word;
    while (ss >> word) {
      std::cout << word << ", ";
    }
    std::cout << std::endl;
  }
}
