#include "circulo.h"
#include <iostream>

Circulo::Circulo(float cx, float cy, float r) {
    centro_x = cx;
    centro_y = cy;
    raio = r;
    std::cout << "Construtor Circulo\n";
}

Circulo::~Circulo(){
    std::cout << "Destrutor Circulo\n";
}

void Circulo::draw(){
    std::cout << "Circulo: (" <<
        centro_x << "," << centro_y << ")->"
              << raio << "\n";
}






