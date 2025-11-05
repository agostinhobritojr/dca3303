#include <iostream>
#include <cstring>
#include "motor.h"

using namespace std;

int main(void){
//    Equipamento e;
//    e.setPreco(39);

    Motor m, m1(500);

std::cout << "preco m1 = " << m1.getPreco() << "\n";

//    m.preco = 100;
    m.setFabricante("ACME");
    m.setPotencia(1000);
//    m.setPreco(200);
    m.Equipamento::setPreco(200);
 //   m.setPotencia(10);

    m.setNome("Speedatron");
    m.setVelocidade(280);
    cout << m.getFabricante() << "\n"
         << m.getPreco() << "\n"
         << m.getNome() << "\n"
         << m.getPotencia() << "\n"
         << m.getVelocidade() << "\n";
}
