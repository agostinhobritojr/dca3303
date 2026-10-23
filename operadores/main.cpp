#include <iostream>
#include "vetor2d.h"

int main(void){
  // v1 eh um objeto da classe Vetor2d
  Vetor2d v1(3, 4), v2(1,-2), v3;

//  v3 = v1.soma(v2);
//  v3.print(); std::cout << std::endl;

//  v3 = v1 + v2;
//  v3 = v1.operator+(v2);
  v3.print(); std::cout << std::endl;

  v3 = 4*v1;

  v3.print();
}














