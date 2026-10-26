#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H

class Equipamento {
 private:
  char nome[100];
  char fabricante[100];
  // somente metodos da classe Equipamento
  // e de suas subclasses podem acessar preco
 protected:
  float preco;

 public:
  Equipamento();
  Equipamento(float preco_);
  ~Equipamento();
  void setNome(const char* nome_);
  void setFabricante(const char* fabricante_);
  void setPreco(float preco_);
  char* getNome(void);
  char* getFabricante(void);
  float getPreco(void);
};

#endif