#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

class FiguraGeometrica
{
public:
    FiguraGeometrica();
    // destrutor virtual: invoca-se o destrutor da subclasse
    virtual ~FiguraGeometrica();
    // funcao virtual: invoca-se a funcao da subclasse

    // funcao virtual PURA
    virtual void draw() = 0;
};

#endif // FIGURAGEOMETRICA_H
