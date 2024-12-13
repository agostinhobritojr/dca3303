#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

class FiguraGeometrica{
private:
    int z; // profundidade
public:
    FiguraGeometrica(int z=1);
    virtual ~FiguraGeometrica(){}
    virtual void draw();
    int getZ();
};

#endif // FIGURAGEOMETRICA_H
