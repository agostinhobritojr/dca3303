#include <iostream>

class Vetor2d {
 private:
  float x;
  float y;

 public:
  void setX(float x_) {
    if (x_ > 0) x = x_;
  }
  void setY(float y_) {
    if (y_ > 0) y = y_;
  }
  float getX() { return x; }
  float getY() { return y; }
};

int main(void) {
  Vetor2d v;

  // v.x = 3;
  // v.y = -4;
  // std::cout << "v.y = " << v.y << std::endl;
  v.setX(27);
  v.setY(-3);
  std::cout << v.getX() << std::endl;
  std::cout << v.getY() << std::endl;
}