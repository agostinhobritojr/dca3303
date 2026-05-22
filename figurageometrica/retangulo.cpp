#include "retangulo.h"
#include <iostream>

Retangulo::Retangulo(int x0, int y0, int largura, int altura, int cor) {
    this->x0 = x0;
    this->y0 = y0;
    this->altura = altura;
    this->largura = largura;
    this->cor = cor;
 //   std::cout << "Construtor Retangulo\n";
}

Retangulo::~Retangulo()
{
  //  std::cout << "Destrutor Retangulo\n";
}

void Retangulo::draw(){
//    std::cout << "draw Retangulo\n";
    std::cout << "draw Retangulo: ";
    std::cout << "(" << x0 << "," << y0 << "):dim(";
    std::cout << largura << "," << altura << ")";
    std::cout << ":cor(" << cor << ")\n";

}

int Retangulo::getLargura()
{

}

int Retangulo::getAltura()
{

}
