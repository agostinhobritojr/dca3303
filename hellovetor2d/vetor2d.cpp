#include "vetor2d.h"
#include "vetor2d.h"
#include <cmath>
#include <math.h>
#include <iostream>

void Vetor2d::setX(float x_) {
    x = x_;
}

float Vetor2d::getX() { return x; }

void Vetor2d::setY(float y_) {
    y = y_;
}

float Vetor2d::getY() { return y; }

void Vetor2d::print(){
    std::cout << "(" << x << "," << y << ")";
}

float Vetor2d::angulo(){
    return std::atan2(y,x) * 180 / M_PI;
}

Vetor2d Vetor2d::unitario(){
    Vetor2d retorno;
    float tam;
    tam = norma();
    retorno.x = x /tam;
    retorno.y = y /tam;
    return retorno;
}

float Vetor2d::norma(){
    return std::sqrt(x*x + y*y);
}



