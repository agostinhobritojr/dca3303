#include <iostream>
#include <vector>
#include <numeric>
#include <chrono>
#include <random>
#include <algorithm>
#include <iomanip>

int main(){
  int numero;
  std::vector<int> numeros(60);
  std::vector<int> aposta(6);
  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
  std::iota(numeros.begin(), numeros.end(),1);



  for(int i=0; i<44; i++){
  std::shuffle (numeros.begin(), numeros.end(),
          std::default_random_engine(seed));

  std::copy(numeros.begin(), numeros.begin()+6, aposta.begin());
//  std::sort(aposta.rbegin(), aposta.rend());
  std::sort(aposta.begin(), aposta.end());

  for(auto i: aposta){
    std::cout << std::setw(2);
    std::cout << i << " ";
  }

  std::cout << std::endl;
  }
  return 0;
}
