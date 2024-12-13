#include "retangulo.h"
#include <iostream>

Retangulo::Retangulo(int x, int y, int larg,
                     int alt, int z) :
    FiguraGeometrica(z) {
    this->x = x;
    this->y = y;
    this->larg = larg;
    this->alt = alt;
}

void Retangulo::draw()
{
    std::cout << "draw Retangulo (" << x << "," << y << "): ";
    std::cout << larg << " x " << alt << "\n";
}
