#include "figurageometrica.h"
#include <iostream>

FiguraGeometrica::FiguraGeometrica() {
    std::cout << "Construtor FiguraGeometrica\n";
}

void FiguraGeometrica::setColor(int cor){
    this->cor = cor;
}

void FiguraGeometrica::draw(){
    std::cout << "draw FiguraGeometrica\n";
}

