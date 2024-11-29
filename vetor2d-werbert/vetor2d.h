#ifndef VETOR2D_H
#define VETOR2D_H

class Vetor2d {
private:
    float x;
    float y;
public:
    // 1. construtor padrao
 //   Vetor2d();
    // 2. construtor com argumentos
    Vetor2d(float x_=0, float y_=0);

    // 3. construtor de copia
    Vetor2d(const Vetor2d &v);

    ~Vetor2d();

    void setX(float x_) ;
    void setY(float y_);
    float getX() ;
    float getY() ;

    // retorna a norma do vetor
    float norma();

    // retorna o angulo com o eixo x
    float angulo();

    // vetor unitario na direcao do vetor
    Vetor2d unitario();

    // soma o vetor atual com v1 e retorna
    // o resultado
    Vetor2d soma(Vetor2d v1);

    // imprime o vetor: (3,4)
    void print();

    Vetor2d produto (float a);
    float produto (Vetor2d v1);

};

#endif // VETOR2D_H
