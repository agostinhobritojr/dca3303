#include <iostream>

template <typename T>
class Alo{
private:
    T x, y;
public:
    Alo(T x_, T y_);
    T getX();
    Alo getAlo(Alo a);
};

template <typename T>
Alo<T> Alo<T>::getAlo(Alo<T> a){
    Alo<T> b;
    b = a;
    return b;
}

template <typename T>
Alo<T>::Alo(T x_, T y_){
    x = x_; y = y_;
}

int main(){
    Alo<int> alo(3,5);
    Alo<float> alof(4.7,8.9);
    return 0;
}





