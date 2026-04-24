#include <iostream>

class Alo{
    int x;
public:
    Alo(){
       x = -1;
        std::cout << "construtor PADRAO alo\n";
   }
    Alo(int x){
        this->x = x;
        std::cout << "construtor C/ARGUMENTOS alo\n";
    }
    ~Alo(){
        std::cout << "destrutor\n";
    }
    void print(){
        std::cout << "print: "<< x << "\n";
    }
};

int main(){
    Alo *pa;
    pa = new Alo(3);
    pa->print();
    delete pa;

    pa = new Alo[5];
    for(int i=0; i<5; i++){
        pa->print();
    }
    delete [] pa;
    return 0;
}
