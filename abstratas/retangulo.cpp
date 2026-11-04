#include "retangulo.h"

#include <iostream>

Retangulo::Retangulo(int x0, int y0, int largura, int altura) {
  this->x0 = x0;
  this->y0 = y0;
  this->largura = largura;
  this->altura = altura;
}
void Retangulo::draw() {
  std::cout << "draw Retangulo: ";
  std::cout << "(" << x0 << "," << y0 << "): [";
  std::cout << largura << ", " << altura << "]\n";
}