#include <iostream>

class Vetor2d{
private:
    float y;
    float x;
public:
    void setX(float x_){
        if(x_ >=0){
        x = x_;
        }
    }
    float getX(){
        return x;
    }
};

int main(void){
    // v eh objeto da classe Vetor2d
    Vetor2d v;
//    std::cout << v.x << std::endl;

    v.setX(3); std::cout << v.getX();
}














