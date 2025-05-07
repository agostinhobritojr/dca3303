#ifndef VETOR2D_H
#define VETOR2D_H

// declaracao da classe Vetor2d
class Vetor2d{
private:
    float x, y;
public:
    void setX(float x_);
    float getX();
    void setY(float y_);
    float getY();
    void print();
    float norma();
    float angulo();
    Vetor2d produto(float a);
    Vetor2d soma(Vetor2d v1);
    Vetor2d subtracao(Vetor2d v1);
    Vetor2d unitario();
};





#endif // VETOR2D_H
