#include <iostream>
#include "figurageometrica.h"
#include "reta.h"
#include "circulo.h"
#include "retangulo.h"

int main(){
    FiguraGeometrica fig;
    FiguraGeometrica *pfig;

    Reta rt;
    Reta *prt;
    Circulo c;
    Retangulo rg;

    pfig = &fig;
    pfig->draw();

    pfig = &rt;
    // prt = &fig; PROIBIDO!!!

    std::cout << "----\n";
    pfig->draw();
    std::cout << "----\n";

    rt.setColor(20);
    rt.draw();
    c.draw();
    rg.draw();
    return 0;
}
