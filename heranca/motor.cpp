#include "motor.h"
#include <iostream>

Motor::Motor(){
    std::cout << "Construtor Motor padrao\n";
}

// construtor com LISTA DE INICIALIZADORES
Motor::Motor(float potencia_) : Equipamento(20*potencia_),
    potencia(potencia_)
{
    std::cout << "Construtor Motor argumentos\n";
//    this->potencia = potencia;
//    preco = 20*potencia;
}

Motor::~Motor(){
    std::cout << "Destrutor Motor\n";
}

void Motor::setPotencia(float _potencia){
    potencia=_potencia;
    preco = potencia * 20;
 //   setPreco(potencia * 20);
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

void Motor::setPreco(float _preco)
{
    std::cout << "setPreco - Motor\n";
    preco = _preco;
    potencia = preco/20;
}
