#include <iostream>

class Alo{
    float x;
public:
    void print(){
        int a = 4;
        std::cout << "print alo: " << x << std::endl;
    }
    void setX(float x){
        this->x = x; // propriedade = local
    }
};

int main(){
    Alo a, *pa;
    std::cout << "pa = " << pa << std::endl;
    a.setX(3);
    a.print();
    pa = &a;
    pa->print();
    return 0;
}
