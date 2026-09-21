// diretiva de compilacao condicional
#ifndef VETOR2_H
#define VETOR2_H

class Vetor2d{
  private:
  float y;
  float x;
  public:
  // construtores da classe
  // construtor padraao (default)
  Vetor2d();

  // construtor com argumentos
  Vetor2d(float _x, float _y);

  void setX(float x_);
  void setY(float y_);
  float getX();
  void print(void);
  float norma(void);
  float angulo(void);
  Vetor2d soma(Vetor2d v);
  // sobrecarga de metodos
  // method overloading

  Vetor2d produto(float a);
  float produto(Vetor2d v1);
//  Vetor3d produto(Vetor2d v1);
};

#endif




