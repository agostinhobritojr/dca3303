#include <iostream>

class Vetor2d{
private:
  float y;
  float x;
public:
  void setX(float x_){
    x = x_;
  }

  float getX(){
    return x;
  }
};

int main(void){
  Vetor2d v; // v eh um objeto da classe Vetor2d
 // v.x = 4;
  v.setX(-3);
  std::cout << v.getX();
  std::cout << "tamanho de v = " << sizeof(v) << std::endl;
}




