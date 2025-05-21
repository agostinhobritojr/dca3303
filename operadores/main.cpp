#include <iostream>
#include "vetor2d.h"


int main(){
    Vetor2d v1(3,4), v2(5,6), v3;

    std::cout << "v1 = " << v1 <<
        " e v2 = " << v2 << "\n";

    v3 = 4*v1 + v2*5;

    std::cout << v3 << "\n";

 //   v3 = v1+v2;
 //   v3 = v1.operator+(v2);
 //   v3.print();
 //   std::cout << "interno = " << v1*v2 << std::endl;
 //   std::cout << std::endl;
 //   v3 = v1*5;
 //   std::cout << v3*v1 + v1*v2 << std::endl;
    return 0;
}
