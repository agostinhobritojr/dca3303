#ifndef ALO_H
#define ALO_H

template <typename T>
class Alo{
private:
    T x, y;
public:
    Alo(T param);
    T getX();
    Alo copia();
};

template <typename T>
Alo<T>::Alo(T param){
    x = param;
}

template <typename T>
T Alo<T>::getX(){
    return x;
}

template <typename T>
Alo<T> Alo<T>::copia(){
    Alo<T> teste;
    teste.x = x;
    return teste;
}








#endif // ALO_H
