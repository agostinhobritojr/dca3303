#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

class FiguraGeometrica{
protected:
    float r, g, b, a;
public:
    FiguraGeometrica();
    // destrutor virtual: invoca-se o destrutor da subclasse
    virtual ~FiguraGeometrica();
    // funcao virtual: invoca-se a funcao da subclasse

    // funcao virtual PURA
    virtual void draw() = 0;
};

#endif // FIGURAGEOMETRICA_H
