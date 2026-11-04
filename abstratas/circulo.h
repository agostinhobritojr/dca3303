#ifndef CIRCULO_H
#define CIRCULO_H

#include "figurageometrica.h"

class Circulo: public FiguraGeometrica{
  int xc, yc;
  int raio;
public:
  Circulo(int xc, int yc, int raio);
  void draw();
};

#endif