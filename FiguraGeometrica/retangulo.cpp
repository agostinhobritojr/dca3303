#include "retangulo.h"
#include <iostream>

Retangulo::Retangulo(float _xsup, float _ysup, float _larg, float _alt) {
    xsup = _xsup;
    ysup = _ysup;
    larg = _larg;
    alt  = _alt;
    std::cout << "Construtor Retangulo\n";
}

Retangulo::~Retangulo(){
    std::cout << "Destrutor Retangulo\n";
}

void Retangulo::draw()
{
    std::cout << "Retangulo: (" << xsup << "," << ysup <<
        ")>[" << larg << "]^[" << alt << "]\n";
}




