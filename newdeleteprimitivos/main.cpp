#include <iostream>

int main(){
    int *x;
    x = new int;
    *x = 3;
    std::cout << " x = " << x << "\n";
    std::cout << "*x = " << *x << "\n";
    delete x;

    x = new int[10];
    x[1] = 10;
    std::cout << "x    = " << x << "\n";
    std::cout << "x[1] = " << x[1] << "\n";
    delete [] x;
    return 0;
}
