#include <iostream>
#include <vector>
#include <ctime>
#include <numeric>
#include <algorithm>
#include <iomanip>
int main(){
    std::srand(std::time(0));
    std::vector<int> valor(60);
    std::iota(valor.begin(), valor.end(), 1);

    for(auto i: valor){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;

    for(int i=0; i<10; i++){
        std::random_shuffle(valor.begin(), valor.end());
        std::sort(valor.begin(), valor.begin()+6);
        for(std::vector<int>::iterator it = valor.begin();
             it != valor.begin()+6; it++){
            std::cout << std::setw(2) << *it << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
