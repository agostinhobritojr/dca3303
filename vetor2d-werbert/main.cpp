#include <iostream>
#include "vetor2d.h"

int main(void) {
    Vetor2d v1, v2, v3;
    v1.print();
    v1.setX(3);
    v1.setY(4);
    v2 = v1.unitario();
    v1.print();
    v2.print();
    v3 = v1.soma(v2);
    v3.print();
//    std::cout << v1.getX() << std::endl;
//    std::cout << v1.getY() << std::endl;
}
