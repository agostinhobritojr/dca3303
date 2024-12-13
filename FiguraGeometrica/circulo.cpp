#include "circulo.h"
#include <iostream>

Circulo::Circulo(int x, int y,
                 int raio, int z) : FiguraGeometrica(z){
    this->x = x;
    this->y = y;
    this->raio = raio;
}

void Circulo::draw()
{
    std::cout << "draw Circulo (" << x << ", " << y << "):" << raio << "\n";
}
