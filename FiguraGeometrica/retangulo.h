#ifndef RETANGULO_H
#define RETANGULO_H

#include "figurageometrica.h"

class Retangulo : public FiguraGeometrica{
    float xsup, ysup, larg, alt;
public:
    Retangulo(float _xsup, float _ysup, float _larg, float _alt);
    ~Retangulo();
    void draw();
};

#endif // RETANGULO_H
