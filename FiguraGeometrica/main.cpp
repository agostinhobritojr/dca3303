#include <iostream>
#include "figurageometrica.h"
#include "reta.h"
#include "circulo.h"
#include "retangulo.h"
#include <vector>
#include <algorithm>

bool compare(FiguraGeometrica* f1, FiguraGeometrica *f2){
    return (f1->getOrdem() > f2->getOrdem());
}

int main(){
    FiguraGeometrica fig, *pfig;
    std::vector<FiguraGeometrica*> figs;

    figs.push_back(new Circulo());
    figs.push_back(new Retangulo());
    figs.push_back(new Reta());
    figs.push_back(new Circulo());
    figs.push_back(new Retangulo());
    figs.push_back(new Reta());
    figs.push_back(new Circulo());
    figs.push_back(new Retangulo());
    figs.push_back(new Reta());

    for(auto fig : figs){
        fig->setOrdem(rand()%100);
    }

    for(auto fig : figs){
        std::cout << fig->getOrdem() << ": ";
        fig->draw();
    }

    std::sort(figs.begin(), figs.end(), compare);
    std::cout << std::endl;

    for(auto fig : figs){
        std::cout << fig->getOrdem() << ": ";
        fig->draw();
    }

    for(auto fig : figs){
        delete fig;
    }
    return 0;
}
