#ifndef CIRCULO_H
#define CIRCULO_H

#include "figurageometrica.h"

class Circulo : public FiguraGeometrica
{
    int x0, y0, raio;
public:
    Circulo(int x0, int y0, int raio, int cor);
    ~Circulo();
    void draw();
};

#endif // CIRCULO_H
