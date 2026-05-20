#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

class FiguraGeometrica{
protected:
    int cor;
public:
    FiguraGeometrica();
    virtual ~FiguraGeometrica();
    void setColor(int cor);
    // funcao-membro virtual pura
    // torna a classe dita ABSTRATA
    // nao pode criar objetos dessa classe
    virtual void draw() = 0;
};

#endif // FIGURAGEOMETRICA_H
