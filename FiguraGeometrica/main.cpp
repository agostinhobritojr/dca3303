#include <iostream>
#include "figurageometrica.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"

int main(){
    FiguraGeometrica fig, *pfig;
    Circulo c;
    Reta r, *pr;


    std::cout << "\n";

//    pfig = &fig;
    pfig = &r;
//    pr = &fig;
    pfig->draw();

    std::cout << "\n";

    r.draw();
    c.draw();
    return 0;
}
