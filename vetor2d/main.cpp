#include <iostream>
#include "vetor2d.h"

int main(void) {
    Vetor2d v;
    float a=1, b;
    b = modulo(a);
    // v.x = 3;
    // v.y = -4;
    // std::cout << "v.y = " << v.y << std::endl;
    v.setX(27);
    v.setY(-3);
    std::cout << v.getX() << std::endl;
    std::cout << v.getY() << std::endl;
}
