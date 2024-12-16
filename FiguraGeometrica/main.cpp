#include <iostream>
#include "figurageometrica.h"
#include "reta.h"
#include "circulo.h"
#include "retangulo.h"
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>


bool compare(FiguraGeometrica* f1, FiguraGeometrica* f2){
    if(f1->getZ() > f2->getZ()){
        return true;
    }
    return false;
}

int main(){
    FiguraGeometrica *pfig;
    std::vector<FiguraGeometrica *> figs;
    std::string s;

    std::ifstream fin;
    fin.open("/home/ambj/workspace/"
             "dca3303/FiguraGeometrica/figura.txt");

    if(!fin.is_open()){
        exit(0);
    }

    while(fin.good()){
        fin >> s;
        if(fin.good()){
            if(s.compare("retangulo") == 0){
                int x, y, larg, altura, z;
                fin >> x >> y >> larg >> altura >> z;
                figs.push_back(new Retangulo(x, y, larg, altura, z));
            }
            else if(s.compare("reta") == 0){
                int x1, y1, x2, y2, z;
                fin >> x1 >> y1 >> x2 >> y2 >> z;
                figs.push_back(new Reta(x1, y1, x2, y2, z));
            }
            else if(s.compare("circulo") == 0){
                int x, y, raio, z;
                fin >> x >> y >> raio >> z;
                figs.push_back(new Circulo(x, y, raio, z));
            }
        }
    }

/*
    figs.push_back(new Circulo(3));
    figs.push_back(new Reta(5));
    figs.push_back(new Retangulo(1));
    figs.push_back(new Circulo(2));
    figs.push_back(new Circulo(4));
*/
    std::sort(figs.begin(), figs.end(), compare);

    for(auto i : figs){
        i->draw();
    }

    for(auto i : figs){
        delete i;
    }

    /*
     *
    pfig = new Reta();
    pfig->draw();
    delete pfig;

    std::cout << "passou aqui\n";

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

    fig.draw();
    rt.draw();
    c.draw();
    rg.draw();
*/
    return 0;
}
