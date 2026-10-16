#include <iostream>

template <typename T>
T media(T a, T b){
  return (a+b)/2;
}

class Alo{
  int a;
public:
  Alo(int a){
    this->a = a;
  }
  Alo operator+(Alo& outro){
    Alo ret(0);
    ret.a = a + outro.a;
    return ret;
  }
  Alo operator/(float x){
    Alo ret(0);
    ret.a = a/x;
    return ret;
  }
  void print(){
    std::cout << "Alo: a = " << a << "\n";
  }
};

int main (){
  Alo A(10), B(12), C(3);
  A.print();
  B.print();
  C = media<Alo>(A, B);
  C.print();
  int a=1, b=2, c=3;
  float x=4, y=5, z=6;
  c = media<int>(a, b);
  std::cout << "c = " << c << "\n";
  c = media<float>(a, x);
  std::cout << "c = " << c << "\n";
  z = media<float>(x, y);
  std::cout << "z = " << z << "\n";
  z = media(x, y);
  std::cout << "z = " << z << "\n";

  return 0;
}
