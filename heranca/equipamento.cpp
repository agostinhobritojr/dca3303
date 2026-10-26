#include "equipamento.h"

#include <cstring>
#include <iostream>

Equipamento::Equipamento() {
  preco = 0.0;
  std::cout << "Construtor Equipamento (default)\n";
}

Equipamento::Equipamento(float preco_) {
  preco = preco_;
  std::cout << "Construtor Equipamento (preco)\n";
}

Equipamento::~Equipamento() { std::cout << "Destrutor Equipamento\n"; }

void Equipamento::setNome(const char* nome_) { strcpy(nome, nome_); }

void Equipamento::setFabricante(const char* fabricante_) {
  strcpy(fabricante, fabricante_);
}

void Equipamento::setPreco(float preco_) { preco = preco_; }

char* Equipamento::getNome(void) { return nome; }

char* Equipamento::getFabricante(void) { return fabricante; }

float Equipamento::getPreco(void) { return preco; }
