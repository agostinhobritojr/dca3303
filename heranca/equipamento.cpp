#include "equipamento.h"
#include <cstring>
#include <iostream>

Equipamento::Equipamento(){
    std::cout << "Construtor padrao equipamento\n";
}

Equipamento::Equipamento(int preco_){
    preco = preco_;
    std::cout << "Construtor c/ args\n";

}

Equipamento::~Equipamento()
{
    std::cout << "destrutor equipamento\n";
}

void Equipamento::setNome(const char *nome_){
    strcpy(nome,nome_);
}

void Equipamento::setFabricante(const char *fabricante_){
    strcpy(fabricante,fabricante_);
}

void Equipamento::setPreco(float preco_){
    std::cout << "setpreco equipamento\n";
    preco=preco_;
}

char* Equipamento::getNome(void){
    return nome;
}

char* Equipamento::getFabricante(void){
    return fabricante;
}

float Equipamento::getPreco(void){
    return preco;
}
