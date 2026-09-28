#include <iostream>

// ponteiro selvagem

class Alo{
  int x;
public:
//  Alo() { std::cout << "chamando construtor\n";}
  Alo(int x = 0) {
    std::cout << "chamando construtor arg\n";
    this->x = x;
  }
  ~Alo(){std::cout << "chamando destrutor\n";}
  void print(){
    std::cout << "print: " << this << ": " << x << "\n";
  }
  void print2(){
    std::cout << "print2...\n";
  }
};

int main(){
  int *x;
  Alo *pa;

  std::cout << "pa = " << pa << std::endl;

//  pa = new Alo;
  pa = new Alo(5);
  pa->print();
  pa[0].print();
  delete pa;

  std::cout << "\n\n\n";
// multiplos objetos
  pa = new Alo[3];
  pa[2].print();
  delete [] pa;
  std::cout << "\n\n\n";

/*
  x = new int;
  x[0] = 3;
  delete x;

  x = new int[10];
  x[3] = 8;
  delete [] x;

  std::cout << "Hello World!" << std::endl;
*/
  return 0;
}
