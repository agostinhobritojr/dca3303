#include "vetor2d.h"
#include <iostream>
#include <cmath>

Vetor2d::Vetor2d(){
    std::cout << "Construtor padrao\n";
    x = 0; y = 0;
}

Vetor2d::Vetor2d(float x_, float y_){
    x = x_; y = y_;
}

Vetor2d::~Vetor2d(){
    std::cout << "Destrutor\n";
}

void Vetor2d::setX(float x_){
    if(x_ >=0){
        x = x_;
        // alo
    }
}

float Vetor2d::getX(){
    return x;
}

void Vetor2d::setY(float y_){
    y = y_;
}

float Vetor2d::getY(){
    return y;
}

void Vetor2d::print(){
    std::cout << "(" << x << "," << y << ")";
//    fluidos::explosao();
}

float Vetor2d::norma(){
    return std::sqrt(x*x + y*y);
//   return sqrt(pow(x,2) + pow(y,2));
}

float Vetor2d::angulo(){
    return 180.0/M_PI * std::atan2f(y,x);
}

Vetor2d Vetor2d::produto(float a){
    Vetor2d ret;
    ret.x = a * x;
    // funciona, mas fica lento devido aa chamada
    // da funcao setX
    // ret.setX(a * x);
    ret.y = a * y;
    return ret;
}

float Vetor2d::produto(Vetor2d v1){
    return x*v1.x + y*v1.y;
}













