#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "circulo.h"
#include "figurageometrica.h"
#include "reta.h"
#include "retangulo.h"

int main() {
  // FiguraGeometrica f;
  FiguraGeometrica* pf;
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

  std::ifstream fin;
  std::vector<FiguraGeometrica*> figuras;
  std::string s;

  fin.open("desenho.txt");
  if (!fin.is_open()) {
    std::cout << "nao abriu o arquivo\n";
    exit(0);
  }

  while (fin.good()) {
    fin >> s;
    if (fin.good()) {
      std::cout << s << std::endl;
      if (s.compare("reta") == 0) {
        int x1, y1, x2, y2;
        fin >> x1 >> y1 >> x2 >> y2;
        figuras.push_back(new Reta(x1, y1, x2, y2));
      } else if (!s.compare("retangulo")) {
        int x0, y0, largura, altura;
        fin >> x0 >> y0 >> largura >> altura;
        figuras.push_back(new Retangulo(x0, y0, largura, altura));
      } else if (!s.compare("circulo")) {
        int xc, yc, raio;
        fin >> xc >> yc >> raio;
        figuras.push_back(new Circulo(xc, yc, raio));
      }
    }
  }

  /*
  figuras.push_back(new Reta(1, 2, 3, 4));
  figuras.push_back(new Reta(4, 6, 7, 8));
  figuras.push_back(new Retangulo(10, 23, 3, 40));
  figuras.push_back(new Circulo(12, 32, 4));
*/
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