// diretiva de compilacao condicional
// so compila se o simbolo VETOR2D_H
// NAO ESTIVER DEFINIDO
#ifndef VETOR2D_H
#define VETOR2D_H

// declaracao da classe Vetor2d
class Vetor2d{
private:
    float y;
    float x;
    // alo
public:
    // construtor padrao (default)
    Vetor2d(void);
    // construtor com argumentos
    Vetor2d(float x_, float y_);
    // construtor de copia
    // recebe referencia constante
    // para evitar modificacoes acidentais
    // no objeto oriundo para ser copiado
    Vetor2d(const Vetor2d& copia);

    // destrutor
    ~Vetor2d(void);
    void setX(float x_);
    float getX();
    void setY(float y_);
    float getY();
    void print(void);
    float norma(void);
    float angulo(void);
    // sobrecarga de operadores
    // produto POR escalar
    Vetor2d produto(float a);
    // produtor escalar
    float produto(Vetor2d v1);
//    Vetor3d produtoVetorial(Vetor2d v1);
};

#endif // VETOR2D_H







