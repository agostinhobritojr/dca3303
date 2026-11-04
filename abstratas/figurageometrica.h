#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

class FiguraGeometrica {
  int cor;

 public:
  FiguraGeometrica();
  // destrutor virtual para permitir polimorfismo
  // durante o processo de destruição de objetos
  virtual ~FiguraGeometrica();
  void setCor(int cor_);
  int getCor();
  // metodo virtual
  //
  // uma classe ABSTRATA eh aquela que possui PELO MENOS
  // uma funcao(ou metodo) virtual puro
  //
  // metodo virtual PUR0
  virtual void draw() = 0;
};

#endif