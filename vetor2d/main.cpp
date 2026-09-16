#include <iostream>
#include <cmath>

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

  float norma(void){
    return std::sqrt(x*x + y*y);
  }

  float angulo(void){
    return std::atan2(y, x)*180/M_PI;
  }

//  v3 = v1.soma(v2);
  Vetor2d soma(Vetor2d v){
    Vetor2d ret;
    ret.x = x + v.x;
    ret.y = y + v.y;
    return ret;
  }

  Vetor2d escalar(float a){
    Vetor2d ret;
    ret.x = a * x;
    ret.y = a * y;
    return ret;
  }

};

int main(void){
  // v1 eh um objeto da classe Vetor2d
  Vetor2d v1, v2, v3, v4;
  v1.setX(3);
  v1.setY(4);
  v2.setX(-1);
  v2.setY(5);
  std::cout << "norma  = " << v1.norma() << std::endl;
  std::cout << "angulo = " << v1.angulo() << std::endl;

  v3 = v1.soma(v2);

  std::cout << "v3 = ";
  v3.print();

  v4 = v1.escalar(3);

  std::cout << "\n" << std::flush;
}












