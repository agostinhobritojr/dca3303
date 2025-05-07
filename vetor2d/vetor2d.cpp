#include "vetor2d.h"

void Vetor2d::setX(float x_){
    if(x_ >=0){
        x = x_ ;
    }
}

float Vetor2d::getX(){
    return x;
}
