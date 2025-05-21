#include "vetor2d.h"
#include <iostream>
#include <cmath>

Vetor2d::Vetor2d(){
    x = y = 0;
 //   std::cout << "Construtor padrao\n";
}

Vetor2d::Vetor2d(float x_, float y_){
    x = x_; y = y_;
 //   std::cout << "Construtor com argumentos\n";
}

Vetor2d::Vetor2d(float xy_){
    x = y = xy_;
}

Vetor2d::Vetor2d(const Vetor2d &v1){
    x = v1.x; y = v1.y;
    std::cout << "Construtor de cohpia\n";
}

Vetor2d::~Vetor2d(){
 //   std::cout << "Destrutor\n";
}

void Vetor2d::setX(float x_){
    if(x_ >=0){
        x = x_ ;
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
    std::cout<< "(" << x << "," << y << ")";
}

float Vetor2d::norma(){
    float z;
    z = std::sqrt(x*x + y*y);
    return z;
}

float Vetor2d::angulo(){
    return std::atan2(y,x);
}

Vetor2d Vetor2d::produto(float a){
    Vetor2d v;
    v.x = a*x;
    v.y = a*y;
    return v;
}

/*
float Vetor2d::produto(float a)
{
    float v;
    v = 3*a;
    return v;
}
*/

float Vetor2d::produto(Vetor2d v1){
    float ret;
    ret = x*v1.x + y*v1.y;
    return ret;
}

float Vetor2d::operator * (Vetor2d v){
    float ret;
    ret = x*v.x + y*v.y;
    return ret;
}

Vetor2d Vetor2d::soma(Vetor2d v1)
{
    Vetor2d v;
    v.x = x + v1.x;
    v.y = y + v1.y;
    return v;
}

Vetor2d Vetor2d::operator + (Vetor2d v){
    Vetor2d ret;
    ret.x = x+v.x;
    ret.y = y+v.y;
    return ret;
}


Vetor2d Vetor2d::subtracao(Vetor2d v1)
{
    Vetor2d v;
    v.x = x - v1.x;
    v.y = y - v1.y;
    return v;
}

Vetor2d Vetor2d::operator -(Vetor2d v1)
{
    Vetor2d v;
    v.x = x - v1.x;
    v.y = y - v1.y;
    return v;
}

Vetor2d Vetor2d::operator *(float a)
{
    Vetor2d v;
    v.x = a*x;
    v.y = a*y;
    return v;
}

Vetor2d Vetor2d::unitario()
{
    Vetor2d v;
    float tam;
    tam = norma();
    v.x = x/tam;
    v.y = y/tam;
    return v;
}

Vetor2d operator*(float a, Vetor2d v1)
{
    Vetor2d v;
    v.x = a*v1.x;
    v.y = a*v1.y;
    return v;
}

std::ostream& operator << (std::ostream &os,
                          Vetor2d &v){
    os << "(" << v.x << ", " << v.y;
    os << ")";
    return os;
}
