#ifndef ALO_H
#define ALO_H
#include <iostream>

template <typename T, typename U, int N=3>
class Alo{
  T x;
  float y[N];
public:
  Alo(T x);
  U calc();
  void print();
};

template <typename T, typename U, int N>
Alo<T,U,N>::Alo(T x){
  this->x = x;
  for(int i=0; i<N; i++){
      y[i] = 0;
    }
}

template <typename T, typename U, int N>
U Alo<T,U,N>::calc(){
  U x;
  return x;
}

template <typename T, typename U, int N>
void Alo<T,U,N>::print(){
  std::cout << "x = " << x << std::endl;
  for(int i=0; i<N; i++){
      std::cout << y[i] << std::endl;
    }
}
#endif // ALO_H
