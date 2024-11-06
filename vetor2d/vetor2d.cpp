#include "vetor2d.h"
#include <cmath>
#include <iostream>

float modulo(float x){
    if (x < 0){
        return -x;
    }
    return x;
}

Vetor2d::Vetor2d(){
    std::cout << "Construtor padrao\n";
    x = y = 0;
}

Vetor2d::~Vetor2d()
{
    std::cout << "Destrutor\n";
}

void Vetor2d::setX(float x_) {
    if (x_ > 0) x = x_;
}

void Vetor2d::setY(float y_) {
    if (y_ > 0) y = y_;
}

float Vetor2d::getX() {
    return x;
}

float Vetor2d::getY() {
    return y;
}

float Vetor2d::norma(){
    return std::sqrt(x*x + y*y);
}

float Vetor2d::angulo(){
    return std::atan2(y,x);
}

// vetor unitario na direcao do vetor
Vetor2d Vetor2d::unitario(){
    Vetor2d obj;
    float tam;
    tam = norma();
    obj.x = x / tam;
    obj.y = y / tam;
    return obj;
}

// soma o vetor atual com v1 e retorna
// o resultado
Vetor2d Vetor2d::soma(Vetor2d v1){
    Vetor2d obj;
    obj.x = x + v1.x;
    obj.y = y + v1.y;
    return obj;
}

// imprime o vetor: (3,4)
void Vetor2d::print(){
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}

Vetor2d Vetor2d::produto(float a)
{
    Vetor2d obj;
    obj.x = a *x;
    obj.y = a *y;
    return obj;
}

float Vetor2d::produto(Vetor2d v1)
{
    float ret;
    ret = x*v1.x + y*v1.y;
    return ret;
}



