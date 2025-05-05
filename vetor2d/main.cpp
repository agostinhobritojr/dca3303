#include <iostream>

class Vetor2d{
private:
    float x, y;
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
    Vetor2d v;
//    v.x = -4; // ERRO!!!
    v.setX(3);
    std::cout << v.getX();
    std::cout << std::endl;
}






