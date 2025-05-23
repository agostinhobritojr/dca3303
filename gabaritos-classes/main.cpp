#include <iostream>
#include "alo.h"

int main(){
    Alo<int> aloint(3.8);
    Alo<double> alodouble(4.5);
    aloint.print();
    alodouble.print();

    std::cout << sizeof(aloint) << std::endl;
    std::cout << sizeof(alodouble) << std::endl;


   return 0;
}
