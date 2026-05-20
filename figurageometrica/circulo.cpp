#include "circulo.h"
#include <iostream>

Circulo::Circulo() {
    std::cout << "Construtor Circulo\n";
}

Circulo::~Circulo()
{
    std::cout << "Destrutor Circulo\n";
}

void Circulo::draw(){
    std::cout << "draw Circulo\n";
}
