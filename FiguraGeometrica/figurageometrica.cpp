#include "figurageometrica.h"
#include <iostream>

FiguraGeometrica::FiguraGeometrica() {}

void FiguraGeometrica::draw(){
    std::cout << "draw FiguraGeometrica\n";
}

void FiguraGeometrica::setOrdem(int ordem_){
    ordem = ordem_;
}

int FiguraGeometrica::getOrdem(){
    return ordem;
}
