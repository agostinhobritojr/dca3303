#ifndef VETOR2D_H
#define VETOR2D_H

class Vetor2d {
private:
    float x;
    float y;
public:
    void setX(float x_);
    float getX();
    float norma();
    void setY(float y_);
    float getY();
    void print();
    float angulo();
    Vetor2d unitario();
};

#endif // VETOR2D_H
