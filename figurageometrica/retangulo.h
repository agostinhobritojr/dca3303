#ifndef RETANGULO_H
#define RETANGULO_H

#include "figurageometrica.h"

class Retangulo : public FiguraGeometrica{
    int x0, y0;
    int largura, altura;
public:
    Retangulo(int x0, int y0, int largura, int altura, int cor);
    ~Retangulo();
    void draw();
    int getLargura();
    int getAltura();
};

#endif // RETANGULO_H
