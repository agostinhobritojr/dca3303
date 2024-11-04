#include "vetor2d.h"

float modulo(float x){
    if (x < 0){
        return -x;
    }
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
