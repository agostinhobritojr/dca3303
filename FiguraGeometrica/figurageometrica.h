#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

class FiguraGeometrica{
    int ordem;
public:
    FiguraGeometrica();
    virtual ~FiguraGeometrica() = default;
    virtual void draw();
    void setOrdem(int ordem_);
    int getOrdem();
};

#endif // FIGURAGEOMETRICA_H
