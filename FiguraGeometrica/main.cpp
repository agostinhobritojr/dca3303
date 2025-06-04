#include <iostream>
#include "figurageometrica.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>

int main(){
    FiguraGeometrica *pfig;
    std::vector<FiguraGeometrica*> figuras;

    std::ifstream fin;
    fin.open("/home/ambj/workspace/dca3303"
             "/FiguraGeometrica/figura.fig");
    if(!fin.is_open()){
        exit(0);
    }

    // Circulo c;
  //  Reta r, *pr;

    {
    //    pfig = &fig;
//    pfig = &r;
//    pr = &fig; ERRO!

//   pfig = new Reta;
//   pfig->draw();
//   delete pfig;

//   figuras.push_back(new Reta(5,5,8,3.4));
//    figuras.push_back(new Reta(-1,4,6,3));
//    figuras.push_back(new Circulo (10,10,5));
//    figuras.push_back(new Retangulo(3,4,8,9));
    }

    std::string s;

    fin >> s ;
    std::cout << s << std::endl;
    if(s.compare("circulo")==0){
        float x, y, r;
        fin >> x >> y >> r;
        figuras.push_back(new Circulo(x, y, r));
    }

    for(auto i : figuras){
        i->draw();
    }
    std::cout << "\n";

    std::random_shuffle(figuras.begin(), figuras.end());
    for(auto i : figuras){
        i->draw();
    }

    for(auto i : figuras){
        delete i;
    }
    std::cout << "\n";

 //   r.draw();
   // c.draw();
    return 0;
}
