#include "reta.h"

#include <iostream>

Reta::Reta(int x1, int y1, int x2, int y2) {
  this->x1 = x1;
  this->y1 = y1;
  this->x2 = x2;
  this->y2 = y2;
  std::cout << "Construtor Reta\n";
}

Reta::~Reta() { std::cout << "Destrutor Reta\n"; }

void Reta::draw() {
  std::cout << "draw Reta: (" << x1 << "," << y1 << ")--(";
  std::cout << x2 << "," << y2 << ")\n";
}