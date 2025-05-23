#ifndef ALO_H
#define ALO_H
#include <iostream>

template <typename T>
class Alo{
    T x;
public:
    Alo(T a);
    void print(void);
    Alo copia();
};

template <typename T>
Alo<T>::Alo(T a){
    x = a;
}

template <typename T>
void Alo<T>::print(void){
    std::cout << "a = " << x << std::endl;
}

template <typename T>
Alo<T> Alo<T>::copia(){
    Alo<T> ret;
    ret.x = x;
    return ret;
}

#endif // ALO_H
