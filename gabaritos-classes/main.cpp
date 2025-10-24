#include <iostream>
#include "alo.h"

int main(){
    Alo<int> aloint(3);
    Alo<float> alofloat(3.2);
    std::cout << aloint.getX() << std::endl;
    std::cout << alofloat.getX() << std::endl;
    return 0;
}
