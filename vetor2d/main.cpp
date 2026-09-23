#include <iostream>
#include <cmath>
#include "vetor2d.h"

int main(void){
  // v1 eh um objeto da classe Vetor2d
  Vetor2d v1(3.0), v2, v3, v4;
  v1.print();
  std::cout << "\n";


  v1.setX(3);
  v1.setY(4);
  v2.setX(-1);
  v2.setY(5);
  std::cout << "norma  = " << v1.norma() << std::endl;
  std::cout << "angulo = " << v1.angulo() << std::endl;

  v3 = v1.soma(v2);

  std::cout << "v3 = ";
  v3.print();
  std::cout << "\n";

  v3 = v1.produto(3);
  v3.print();
  std::cout << std::endl;

  std::cout << v1.produto(v2);

  std::cout << "\n" << std::flush;
}












