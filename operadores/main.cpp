#include <iostream>
#include "vetor2d.h"

//-fa monaco -fs 22 -bg black -fg green -e

int main(void) {
    int x = 0;
    Vetor2d v1(1,2), v2(4,5), v3;

    v3 = v1.soma(v2);
    std::cout << "v3 = ";
    v3.print();

    v3 = v1.operator+(v2);
    std::cout << "v3 = ";
    v3.print();
}

