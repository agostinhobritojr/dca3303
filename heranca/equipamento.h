#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H
class Equipamento {
  char nome[100];
  char fabricante[100];
  float preco;

 public:
  void setNome(const char* nome_);
  void setFabricante(const char* fabricante_);
  void setPreco(float preco_);
  char* getNome(void);
  char* getFabricante(void);
  float getPreco(void);
};
#endif