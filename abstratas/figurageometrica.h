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
  virtual void draw();
};

#endif