#ifndef CIRCULO_H
#define CIRCULO_H

#include "figurageometrica.h"

class Circulo : public FiguraGeometrica{
private:
    float centro_x, centro_y, raio;
public:
    Circulo(float cx, float cy, float r);
    ~Circulo();
    void draw();
};

#endif // CIRCULO_H
