#include <iostream>

class Alo{
    int x;
public:
    void setX(int x){
        this->x = x;
    }
    void print(void){
        std::cout << "x=" << x << std::endl;
    }
    void print2(void){
        std::cout << "endereco: " << this << "\n";
    }
};

int main(){
    Alo a, *pa, *pb;
    a.setX(4);
    a.print();
    pa = &a;
    pa->print();
    (*pa).print();

    std::cout << pa << std::endl;
    std::cout << pb << std::endl;

    pa->print2();
    a.print2();
    pb->print2();
    std::cout << "passou aqui\n";

    return 0;
}






