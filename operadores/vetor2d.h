#ifndef VETOR2D_H
#define VETOR2D_H

#include <iostream>

class Vetor3d;

class Vetor2d {
private:
    float x;
    float y;
public:
    // construtor padraao (default)
    // invocado quando o objeto eh
    // declarado sem argumentos
//    Vetor2d();
    // construtor com argumentos
    Vetor2d(float x_ = 0, float y_ = 0);
//    Vetor2d(float xy_);
    // destrutor da classe
    // coloque aqui todos os processos de liberacao de recursos
    ~Vetor2d();
    Vetor2d(const Vetor2d & copia);
    void setX(float x_);
    float getX();
    float norma();
    void setY(float y_);
    float getY();
    void print();
    float angulo();
    Vetor2d unitario();
    Vetor2d soma(Vetor2d v);
    Vetor2d operator + (Vetor2d v);
    Vetor2d operator * (float a);
    Vetor2d produto(float a=2);
    float produto(Vetor2d v);
    // funcao amiga eh uma funcaao que pode acessar os
    // campos privados da classe
    friend Vetor2d operator* (float a, Vetor2d v);
    friend std::ostream& operator<<(std::ostream &os, const Vetor2d &v);
    friend std::istream& operator>>(std::istream &is, Vetor2d &v);
};

//Vetor2d operator* (float a, Vetor2d v);

#endif // VETOR2D_H










