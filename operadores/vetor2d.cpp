#include "vetor2d.h"
#include "vetor2d.h"
#include <cmath>
#include <math.h>
#include <iostream>
/*
Vetor2d::Vetor2d(){
    std::cout << "construtor padrao\n";
    x = 0; y = 0;
}
*/

Vetor2d::Vetor2d(float x_, float y_){
    std::cout << "construtor com dois argumentos\n";
    x = x_; y = y_;
}
/*
Vetor2d::Vetor2d(float xy_){
    std::cout << "construtor com um argumento\n";
    x = y = xy_;
}
*/
Vetor2d::~Vetor2d(){
    std::cout << "destrutor\n";
}

Vetor2d::Vetor2d(const Vetor2d &copia){
    std::cout << "Construtor de copia\n";
    x = copia.x;
    y = copia.y;
}

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

Vetor2d Vetor2d::soma(Vetor2d v){
    Vetor2d ret;
    ret.x = x + v.x;
    ret.y = y + v.y;
    return ret;
}

Vetor2d Vetor2d::operator + (Vetor2d v){
    Vetor2d ret;
    ret.x = x + v.x;
    ret.y = y + v.y;
    return ret;
}

Vetor2d Vetor2d::produto(float a){
    Vetor2d retorno;
    retorno.x = a*x;
    retorno.y = a*y;
    return retorno;
}
Vetor2d Vetor2d::operator *(float a){
    Vetor2d retorno;
    retorno.x = a*x;
    retorno.y = a*y;
    return retorno;
}

Vetor2d operator*(float a, Vetor2d v){
    Vetor2d retorno;
    retorno.x = a * v.x;
    retorno.y = a * v.y;
    return retorno;
}

float Vetor2d::norma(){
    return std::sqrt(x*x + y*y);
}

std::ostream& operator<<(std::ostream &os, const Vetor2d &v){
    os << "(" << v.x << "," << v.y << ")";
    return os;
}

std::istream& operator>>(std::istream &is, Vetor2d &v){
    is >> v.x >> v.y;
    return is;
}







