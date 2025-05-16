#include <iostream>
#include <stdio.h>

class Alo{
    int x;
public:
//    Alo(){
//        std::cout << "construtor de alo\n";
//    }
    Alo(int x=0){
        this->x = x;
        std::cout << "construtor de alo\n";
    }
    ~Alo(){
        std::cout << "destrutor de alo\n";
    }
    void print(){
        std::cout << "print alo\n";
    }
};

int main(){

    {
        /*
    int *x, n;

    // new/delete : um UHNICO elemento
    x = new int;
    *x = 4;
    std::cout << x << std::endl;
    std::cout << *x << std::endl;
    delete x;

    n = 5;
    x = new int[n];
    x[3] = -5;
    std::cout << x << std::endl;
    std::cout << x+3 << std::endl;
    std::cout << "\n";
//    printf("x   = %p\n", x);
//    printf("x+3 = %p\n", x+1);
    delete [] x;
 //   std::cout << "passou aqui. O prof. tava errado\n";

    */
        }

    Alo *pa;
        pa = new Alo(4);
    pa->print();
    pa[0].print();
    delete pa;

    pa = new Alo[5];
   // pa[2].print();
    (pa+3)->print();
    (*(pa+3)).print();
    pa[3].print();
    delete [] pa;

    return 0;
}
