#include <iostream>
#include <vector>

#include "figurageometrica.h"
#include "reta.h"

int main() {
  // FiguraGeometrica f;
  FiguraGeometrica* pf;
  std::vector<FiguraGeometrica*> figuras;

  {
    // Reta r(2, 3, 5, 8), *pr;

    // ponteiros para a subclasse nao consegue apontar para objetos
    // da superclasse
    //  pr = &f;

    // ponteiros para a superclasse conseguem apontar para objetos
    // da subclasse
    //  pf = &r;

    //  r.setCor(100);
    //  std::cout << "reta cor: " << r.getCor() << "\n";
    //  r.draw();
    //  pf->draw();
  }

  figuras.push_back(new Reta(1, 2, 3, 4));
  figuras.push_back(new Reta(4, 6, 7, 8));
  figuras.push_back(new Reta(10, 23, 3, -4));
  figuras.push_back(new Reta(12, 32, -3, 4));

  for (auto fig : figuras) {
    fig->draw();
  }

  for (int i = 0; i < figuras.size(); i++) {
    delete figuras[i];
  }

  //  pf = new Reta(1, 2, 3, 4);
  //  pf->draw();
  //  delete pf;

  //  r.FiguraGeometrica::draw();

  // f.setCor(1);
  // f.draw();
  return 0;
}