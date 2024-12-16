#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

class FiguraGeometrica{
private:
    int z; // profundidade
public:
    FiguraGeometrica(int z=1);
    virtual ~FiguraGeometrica(){}
    // funcao virtual pura
    // classe com pelo menos uma destas eh considerada ABSTRATA
    virtual void draw() = 0;
    int getZ();
};

#endif // FIGURAGEOMETRICA_H
