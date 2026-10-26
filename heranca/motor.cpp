#include "motor.h"

#include <iostream>

Motor::Motor() {
 // teste = 29;
  std::cout << "Construtor Motor (default)\n";
}

Motor::Motor(float _potencia, float _velocidade)
    : Equipamento(300.0), velocidade(_velocidade) {
  potencia = 200 * preco;
  //  velocidade = _velocidade;
}

Motor::~Motor() { std::cout << "Destrutor Motor\n"; }

void Motor::setPotencia(float _potencia) {
  potencia = _potencia;
  preco = 20 * potencia;
}

void Motor::setVelocidade(float _velocidade) { velocidade = _velocidade; }

float Motor::getPotencia(void) { return potencia; }

float Motor::getVelocidade(void) { return velocidade; }
