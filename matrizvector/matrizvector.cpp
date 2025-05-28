#include <iostream>
#include <vector>

int main(void) {
  std::vector<std::vector<int> > v(10, std::vector<int>(10, 0));
  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
      v[i][j] = i * j;
    }
  }
  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
      std::cout << v[i][j] << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}