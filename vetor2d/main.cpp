#include <iostream>
#include "vetor2d.h"

int main(void){
    // v eh objeto da classe Vetor2d
    Vetor2d v(3,4), v2, v3;
    v.print();
    std::cout << std::endl;
  //  v.setX(3);
  //  v.setY(4);
    v.print();
    std::cout << "\n";

    v3 = v.produto(3);

v3.print();std::cout << std::endl;
//    std::cout << "tamanho = " << v.norma() << std::endl;
//    std::cout << "angulo = " << v.angulo() << std::endl;

    //std::cout << "x = " << v.getX();
}














