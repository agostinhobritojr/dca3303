#include "circulo.h"

#include <iostream>

Circulo::Circulo(int xc, int yc, int raio) {
  this->xc = xc;
  this->yc = yc;
  this->raio = raio;
}

void Circulo::draw() {
  std::cout << "draw Circulo: (" << xc << "," << yc << "): ";
  std::cout << raio << "\n";
}