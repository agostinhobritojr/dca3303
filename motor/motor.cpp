#include "motor.h"
#include <iostream>

// lista de inicializadores (colocados apos o nome do
// metodo construtor)
Motor::Motor() : Equipamento(100), potencia(300) {
    std::cout << "Construtor Motor\n";
}

Motor::Motor(float preco) : Equipamento(preco)
{

}

Motor::~Motor(){
    std::cout << "Destrutor Motor\n";
}

void Motor::setPotencia(float _potencia){
    potencia=_potencia;
    preco = _potencia * 100;
  //  setPreco(_potencia * 100);
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
