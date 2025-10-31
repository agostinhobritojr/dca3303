#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <numeric>
#include <vector>
#include <algorithm>
#include <iomanip>

int main(){
    std::vector<int> numeros(60);
    std::iota(numeros.begin(), numeros.end(), 1);
 //   for(int i=0; i<60; i++){
 //       numeros[i] = i+1;
 //   }
    std::srand(std::time(0));

    for(int j=0; j<42; j++){
        std::random_shuffle(numeros.begin(), numeros.end());
        std::sort(numeros.begin(), numeros.begin()+6);
        for(int i=0; i<6; i++){
            std::cout << std::setw(2);
            std::cout << numeros[i] <<  " ";
        }
        std::cout << std::endl;
    }

    srand(time(0));

    return 0;
}
