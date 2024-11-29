#include <iostream>
#include "vetor2d.h"

int main()
{
    Vetor2d v1(3,4), v2(5,6), v3;
//    v3 = v1+v2;
//    v3 = v1.operator+(v2);
//    v3 = v1*2;
//    v3.print();
    v3 = 2*v1;
  //  v3.print();
    std::cout << "v3 = " << v3 << "\n";
 //   std::cout << "\n";
  //  std::cout.operator<<(56).operator<<(23.0);
 //   std::cout << "\n";
    return 0;
}
