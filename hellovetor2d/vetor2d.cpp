#include "vetor2d.h"
#include "vetor2d.h"
#include <cmath>
#include <math.h>

void Vetor2d::setX(float x_) {
    x = x_;
}

float Vetor2d::getX() { return x; }

void Vetor2d::setY(float y_) {
    y = y_;
}

float Vetor2d::getY() { return y; }

float Vetor2d::norma(){
    return std::sqrt(x*x + y*y);
}
