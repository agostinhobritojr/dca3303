#include <iomanip>
#include <iostream>

int main(void) {
  float x;
  std::cin >> x;
  std::cout << std::fixed;
  std::cout << std::setprecision(2);
  std::cout << x + 1 << std::endl;
  return 0;
}