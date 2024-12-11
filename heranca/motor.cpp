#include "motor.h"
#include <iostream>

Motor::Motor() : Equipamento(30) {
    std::cout << "Construtor padrao motor\n";
}

Motor::~Motor()
{
    std::cout << "destrutor motor\n";
}

void Motor::setPotencia(float _potencia){
    potencia=_potencia;
}

void Motor::setVelocidade(float _velocidade){
    velocidade=_velocidade;
}

float Motor::getPotencia(void){
    return potencia;
}

float Motor::getVelocidade(void){
    return velocidade;
}

void Motor::setPreco(float preco_){
    std::cout << "setpreco motor\n";
    Equipamento::setPreco(preco_);
    preco = preco_;
}








