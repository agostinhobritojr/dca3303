#include <cstring>
#include <iostream>

#include "motor.h"

int main(void) {
  Motor m, m1(100, 200);


  std::cout << m1.getPotencia() << "\n" << m1.getVelocidade() << "\n";

  std::cout << "-----------\n";
  m.setFabricante("ACME");
  m.setPreco(23.45);
  m.setNome("Speedatron");
  m.setPotencia(130);
  m.setVelocidade(280);
  std::cout << m.getFabricante() << "\n"
            << m.getPreco() << "\n"
            << m.getNome() << "\n"
            << m.getPotencia() << "\n"
            << m.getVelocidade() << "\n";
  std::cout << "sizeof(m) = " << sizeof(m) << "\n";
}