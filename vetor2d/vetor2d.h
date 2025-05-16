#ifndef VETOR2D_H
#define VETOR2D_H

// declaracao da classe Vetor2d
class Vetor2d{
private:
    float x, y;
public:
    // construtor padrao (default)
    Vetor2d();
    // construtor com argumentos
    Vetor2d(float x_, float y_);
  //  Vetor2d(int x_, int y_){}
    Vetor2d(float xy_);
    // construtor de copia
    Vetor2d(const Vetor2d &v1);
    // destrutor
    ~Vetor2d();
    void setX(float x_);
    float getX();
    void setY(float y_);
    float getY();
    void print();
    float norma();
    float angulo();
    Vetor2d produto(float a);
    float produto(Vetor2d v1);
    Vetor2d soma(Vetor2d v1);
    Vetor2d subtracao(Vetor2d v1);
    Vetor2d unitario();
};





#endif // VETOR2D_H
