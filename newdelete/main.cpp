#include <iostream>

class Alo{
    int x;
public:
    Alo(int x=0){
        this->x=x;
        std::cout << "construtor c/argumentos\n";
    }
    ~Alo(){
        std::cout << "destrutor\n";
    }
    void setX(int x){
        this->x = x;
    }
    int getX(){
        return x;
    }
    void print(){
        std::cout << "x = " << x << "\n";
    }
};

int main(){
    Alo *a;
    a = new Alo(5);
//    a->setX(3);
    a->print();
    delete a;

    a = new Alo[3];
    a[1].setX(4);
    a[1].print();
    delete [] a;
    /*   int *x;
    int nelem;
    x = new int;
    *x = 3;
 //   std::cout << "x = " << *x << std::endl;
    delete x;
    std::cout << "passou 1\n";

    nelem = 1;
    x = new int[nelem];
    x[0] = 4;
    delete [] x;

    std::cout << "passou 2\n";
    Alo a1, *a2;
    a2 = &a1;
    a2->setX(3);
    a2->print();
    std::cout << a2->getX() << std::endl;
*/
    return 0;
}







