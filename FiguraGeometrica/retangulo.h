#ifndef RETANGULO_H
#define RETANGULO_H

#include "figurageometrica.h"

class Retangulo : public FiguraGeometrica
{
    int x, y, larg, alt;
public:
    Retangulo(int x, int y, int larg, int alt, int z);
    void draw();
};

#endif // RETANGULO_H
