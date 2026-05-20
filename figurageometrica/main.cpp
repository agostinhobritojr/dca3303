#include <iostream>
#include "figurageometrica.h"
#include "reta.h"
#include "circulo.h"
#include "retangulo.h"
#include <vector>
#include <algorithm>

int main(){
    // classe abstrata nao pode ter objetos
    //  FiguraGeometrica fig;
    FiguraGeometrica *pfig;
    std::vector<FiguraGeometrica*> figuras;

    figuras.push_back(new Reta(10,10,15,20,38));
    figuras.push_back(new Retangulo);
    figuras.push_back(new Retangulo);
    figuras.push_back(new Circulo);

    std::random_shuffle(figuras.begin(), figuras.end());

    for(auto fig : figuras){
        fig->draw();
    }


    for(int i=0; i<figuras.size(); i++){
        delete figuras[i];
    }


    /*

    Reta rt;
    Reta *prt;
    Circulo c;
    Retangulo rg;

 //   pfig = &fig;
 //   pfig->draw();

    pfig = &c;
    // prt = &fig; PROIBIDO!!!

    std::cout << "----\n";
    pfig->draw();
    std::cout << "----\n";

    rt.setColor(20);
    rt.draw();
    c.draw();
    rg.draw();
*/
    return 0;
}
