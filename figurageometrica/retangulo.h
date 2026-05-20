#ifndef RETANGULO_H
#define RETANGULO_H

#include "figurageometrica.h"

class Retangulo : public FiguraGeometrica{
    int largura, altura;
public:
    Retangulo();
    ~Retangulo();
    void draw();
    int getLargura();
    int getAltura();
};

#endif // RETANGULO_H
