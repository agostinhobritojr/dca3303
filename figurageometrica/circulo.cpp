#include "circulo.h"
#include <iostream>

Circulo::Circulo(int x0, int y0, int raio, int cor) {
    this->x0 = x0;
    this->y0 = y0;
    this->raio = raio;
    this->cor = cor;
 //   std::cout << "Construtor Circulo\n";
}

Circulo::~Circulo()
{
  //  std::cout << "Destrutor Circulo\n";
}

void Circulo::draw(){
    std::cout << "draw Circulo: (" << x0 << "," << y0;
    std::cout << "): raio(" << raio << "): cor: (";
    std::cout << cor << ")\n";
}
