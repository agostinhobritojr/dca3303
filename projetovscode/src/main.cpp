#include <iostream>

#include "utils.h"

int main() {
  short int x[10];

  std::cout << &x[0] << std::endl;
  std::cout << &x[1] << std::endl;


  std::cout << "Soma: " << soma(3, 4) << std::endl;
  std::cout << "tamanho: " << sizeof(short int*) << std::endl;
  return 0;
}
