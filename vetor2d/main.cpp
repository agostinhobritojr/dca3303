#include <iostream>

class Vetor2d{
private:
  float y;
  float x;
public:
  void setX(float x_){
    x = x_;
  }
  void setY(float y_){
    y = y_;
  }

  float getX(){
    return x;
  }

  void print(void){
    std::cout << "(" << x << "," << y << ")";
  }
};

int main(void){
  // v1 eh um objeto da classe Vetor2d
  Vetor2d v1, v2, v3, v4;
  v1.setX(3);
  v1.setY(4);
  std::cout << "norma  = " << v1.norma() << std::endl;
  std::cout << "angulo = " << v1.teta() << std::endl;
  std::cout << "v1 = ";
  v1.print();
  std::cout << "\n" << std::flush;
}












