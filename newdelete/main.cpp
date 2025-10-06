#include <iostream>

class Alo{
    int x;
public:
    Alo(){
        std::cout << "construtor padrao\n";
    }
    Alo(int x){
        std::cout << "construtor com argumentos\n";
        this->x = x;
    }
    ~Alo(){
        std::cout << "destrutor\n";
    }
    void print(){
        std::cout << "x = " << x << std::endl;
    }
};

int main(){
    Alo *a, *b, *c;

    a = new Alo;
    a->print();
    delete a;

    b = new Alo(3);
    b->print();
    delete b;

    c = new Alo[5];
    c[2].print();
    (c+2)->print();
    (*(c+2)).print();
    delete [] c;
    /*
    int *x, n=1;
    x = new int;
    *x = 3;
    x[0] = 4;
    std::cout << "x =" << *x << std::endl;
    delete x;

    x = new int[n];
    x[3] = 4;
    std::cout << "x[3] = " << x[3] << std::endl;
    delete [] x;
*/
    return 0;
}
