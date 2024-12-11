#include <iostream>
#include "figurageometrica.h"
#include "reta.h"
#include "circulo.h"
#include "retangulo.h"


int main(){
    FiguraGeometrica fig, *pfig;
    Reta rt;
    Circulo c;
    Retangulo rg;

    pfig = &fig;
    pfig->draw();

    pfig = &rt;
    pfig->draw(); // POLIMORFISMO

    pfig = &c;
    pfig->draw();

    pfig = &rg;
    pfig->draw();
    /*
    fig.draw();
    rt.draw();
    c.draw();
    rg.draw();
*/
    return 0;
}
