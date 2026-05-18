#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

class FiguraGeometrica{
    int cor;
public:
    FiguraGeometrica();
    void setColor(int cor);
    virtual void draw();
};

#endif // FIGURAGEOMETRICA_H
