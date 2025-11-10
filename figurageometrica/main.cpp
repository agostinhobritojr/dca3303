#include <iostream>
#include "figurageometrica.h"
#include "reta.h"
#include "circulo.h"
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>

int main(){
    std::ifstream fin;
    std::string s;
    FiguraGeometrica *pf;
    std::vector<FiguraGeometrica*> figs;

    fin.open("/home/ambj/workspace/dca3303/figurageometrica/figuras.txt");

    if(!fin.is_open()){
        exit(0);
    }

    while(fin.good()){
        fin >> s;
        if(fin.good()){
            std::cout << "s = " << s << std::endl;
            if(s.compare("reta") == 0){
                float x0, y0, x1, y1;
                fin >> x0 >> y0 >> x1 >> y1;
                figs.push_back(new Reta(x0,y0,x1,y1));
            } else if(s.compare("circulo") == 0){
                float x0, y0, raio;
                fin >> x0 >> y0 >> raio;
                figs.push_back(new Circulo(x0,y0,raio));
            }
        }
    }

/*
    figs.push_back(new Reta(3,4,10,25));
    figs.push_back(new Circulo(3,3,10));
    figs.push_back(new Reta(1,2,-5,9));
    figs.push_back(new Reta(1,-4,1,5));
    figs.push_back(new Circulo(7,3,1));
*/
    for(int i=0; i<figs.size(); i++){
        figs[i]->draw();
        std::cout << "\n";
    }

    for(int i=0; i<figs.size(); i++){
        delete figs[i];
    }

    /*
    std::cout << "\n";
    std::random_shuffle(figs.begin(), figs.end());
    for(int i=0; i<figs.size(); i++){
        figs[i]->draw();
        std::cout << "\n";
    }

    Reta r(3,4,8,5);
    Circulo c(4,5,2);

    r.draw();
    std::cout << "\n";

    pf = &r;
    pf->draw();
    std::cout << "\n";

    pf = &c;
    pf->draw();
    std::cout << "\n";

    std::cout << "\n-----\n";
    pf = new Reta(4,5,6,7);
    pf->draw();
    std::cout << "\n";
    delete pf;
    std::cout << "\n-----\n";
*/
    return 0;
}



