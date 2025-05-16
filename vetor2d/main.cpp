#include <iostream>
#include "vetor2d.h"

int main(void){
    Vetor2d v1(3,4), v2(5), v3;
//    float a=3;
//    v1.x = -4; // ERRO!!!
//    v1.setX(3);
    v3 = v1.soma(v2);
    v3.print();
//    std::cout << v1.getX();
    std::cout << std::endl;
}






