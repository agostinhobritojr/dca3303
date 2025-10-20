#include <iostream>

#include "media.h"

int main(void){
    int a, b, c;
    float x, y, z;
    a = 1; b = 2;
    x = 1; y = 2;
    c = media<int>(a, b);
    std::cout << "c = " << c << "\n";

    z = media<float>(x, y);
    std::cout << "z = " << z << "\n";

    c = media<float>(x, y);
    std::cout << "c = " << c << "\n";

    z = media<int>(a, b);
    std::cout << "z = " << z << "\n";

    c = media<int>(a, x);
    std::cout << "c = " << c << "\n";

    z = media(x, y);
    std::cout << "z = " << z << "\n";

    std::cout << media<int>(a, y) << "\n";

    print<int,3>(5);

    return 0;
}




