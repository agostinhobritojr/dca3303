#include <iostream>
#include "vetor2d.h"

int main(void){
    Vetor2d v ;
//    v.x = -4; // ERRO!!!
    v.setX(3);
    std::cout << v.getX();
    std::cout << std::endl;
}






