#include <iostream>
#include <algorithm>
#include <vector>
#include <chrono>
#include <cstdlib>
#include <numeric>
#include <iomanip>

int main(){
    int numero;

    numero = 0x20;
    std::cout << "numero = " << numero << "\n";

    std::vector<int> numeros(60);
    std::vector<int>::iterator it;
    std::srand(std::time(0));

    std::iota(numeros.begin(), numeros.end(), 1);

    std::random_shuffle(numeros.begin(), numeros.end());


    for(int i=0; i<40; i++){
        for(it = numeros.begin(); it!=numeros.begin()+6; it++){
            std::cout << std::setw(2) << *it << " ";
        }
        std::cout << "\n";
        std::random_shuffle(numeros.begin(), numeros.end());
    }
/*    for(auto i: numeros){
        std::cout << i << " ";
    }
    std::cout << "\n";
*/
    std::cout << "\n";
    return 0;
}
