#include <iostream>

class Alo{
    int x;
public:
    void setX(int x){
        this->x = x;
    }
    void print(){
        std::cout << "print: "<< this << "\n";
    }
};

void print(){
    std::cout << "print fora\n";
}

int main(){
    Alo a, *pa, *pb=0;
    pa = &a;
    std::cout << "&a =" << &a << "\n";
    a.print();
    print();
    pa->print();
    pb->print();
    return 0;
}







