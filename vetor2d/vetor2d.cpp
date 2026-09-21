#include "vetor2d.h"
#include <iostream>
#include <cmath>

Vetor2d::Vetor2d(){
  std::cout << "Construtor padraao Vetor2d\n";
  x = 0; y = 0;
}

Vetor2d::Vetor2d(float _x, float _y){
  std::cout << "Construtor com argumentos Vetor2d\n";
  x = _x; y = _y;
}

void Vetor2d::setX(float x_){
  x = x_;
}
void Vetor2d::setY(float y_){
  y = y_;
}

float Vetor2d::getX(){
  return x;
}

void Vetor2d::print(void){
  std::cout << "(" << x << "," << y << ")";
}

float Vetor2d::norma(void){
  return std::sqrt(x*x + y*y);
}

float Vetor2d::angulo(void){
  return std::atan2(y, x)*180/M_PI;
}

//  v3 = v1.soma(v2);
Vetor2d Vetor2d::soma(Vetor2d v){
  Vetor2d ret;
  ret.x = x + v.x;
  ret.y = y + v.y;
  return ret;
}

Vetor2d Vetor2d::produto(float a){
  Vetor2d ret;
  ret.x = a * x;
  ret.y = a * y;
  return ret;
}

float Vetor2d::produto(Vetor2d v1){
  return x*v1.x + y*v1.y;
}
