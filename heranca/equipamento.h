#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H

class Equipamento{
    char nome[100];
    char fabricante[100];
    // propriedades e metodos acessiveis pela classe
    // e pelas SUAS HERDEIRAS
protected:
    float preco;
public:
    int teste;
    void setNome(const char *nome_);
    void setFabricante(const char *fabricante_);
    void setPreco(float preco_);
    char* getNome(void);
    char* getFabricante(void);
    float getPreco(void);
};

#endif // EQUIPAMENTO_H
