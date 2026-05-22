#include <iostream>
#include "figurageometrica.h"
#include "reta.h"
#include "circulo.h"
#include "retangulo.h"
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>

int main(){
    // classe abstrata nao pode ter objetos
    //  FiguraGeometrica fig;
    FiguraGeometrica *pfig;
    std::vector<FiguraGeometrica*> figuras;

    std::ifstream fin;
    fin.open("/home/ambj/workspace/dca3303/"
             "figurageometrica/figura.txt");
    if(!fin.is_open()){
        std::cout << "nao abriu figuras.txt \n";
        exit(0);
    }

    std::string s;
    int cor;

    while(fin.good()){
        fin >> s;
        // verifica se a leitura foi correta
        if(fin.good()){
            if(s.compare("reta") == 0){
                int x0, y0, x1, y1;
                fin >> x0 >> y0 >> x1 >> y1 >> cor;
                figuras.push_back(
                    new Reta(x0, y0, x1, y1, cor));
            }
            if(s.compare("retangulo") == 0){
                int x0, y0, largura, altura;
                fin >> x0 >> y0 >> largura >> altura >> cor;
                figuras.push_back(
                    new Retangulo(x0, y0, largura,
                                  altura, cor));
            }
            if(s.compare("circulo") == 0){
                int x0, y0, raio;
                fin >> x0 >> y0 >> raio >> cor;
                figuras.push_back(
                    new Circulo(x0, y0, raio, cor));
            }

        }
    }

//    std::random_shuffle(figuras.begin(), figuras.end());

    for(auto fig : figuras){
        fig->draw();
    }

    // s.writeOFF("saida.off");

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
