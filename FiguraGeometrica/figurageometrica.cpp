#include "figurageometrica.h"
#include <iostream>

FiguraGeometrica::FiguraGeometrica(int z) {
    this->z = z;
}

void FiguraGeometrica::draw(){
    std::cout << "draw FiguraGeometrica\n";
}

int FiguraGeometrica::getZ(){
    return z;
}
