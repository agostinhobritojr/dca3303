#include "figurageometrica.h"

#include <iostream>

FiguraGeometrica::FiguraGeometrica() {
  std::cout << "Construtor FiguraGeometrica\n";
}

FiguraGeometrica::~FiguraGeometrica() {
  std::cout << "Desstrutor FiguraGeometrica\n";
}

void FiguraGeometrica::setCor(int cor_) { cor = cor_; }

int FiguraGeometrica::getCor() { return cor; }

void FiguraGeometrica::draw() {
  std::cout << "draw FiguraGeometrica: cor -> " << cor << "\n";
}