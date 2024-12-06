#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cstdlib>
#include <ctime>

int main(){
    std::vector<int> numeros(60);
    std::vector<int> aposta(6);

    std::iota(numeros.begin(), numeros.end(), 1);
    for(auto val : numeros){
 //       std::cout << val << " ";
    }
    std::cout << std::endl;
    std::srand(std::time(0));

    for(int i=0; i<10; i++){
    std::random_shuffle ( numeros.begin(), numeros.end() );
    std::copy(numeros.begin(), numeros.begin()+6,
              aposta.begin());
    std::sort(aposta.begin(), aposta.end());
    for(auto val : aposta){
        std::cout << val << " ";
    }
    std::cout << std::endl;
    }
 //   for(auto val : numeros){
 //       std::cout << val << " ";
 //   }
 //   std::cout << std::endl;


    return 0;
}
