#include <iostream>
#include "vetor2d.h"

//-fa monaco -fs 22 -bg black -fg green -e


int main(void) {
    int x = 0;
    Vetor2d v1, v2(4,5), v3(6);
    v2.print();
    std::cout << std::endl;
    v1.setX(3);
    v1.setY(4);

    v3 = v1.produto();
    v3.print();
    std::cout << std::endl;

    std::cout << "teste = " << 4.0/0 << std::endl;
    std::cout << "norma  = " << v1.norma() << "\n";
    std::cout << "angulo = " << v1.angulo() << std::endl;
    v2 = v1.unitario();
    std::cout << "v3 = ";
    v2.print();
    std::cout << "; terminou\n";
}

