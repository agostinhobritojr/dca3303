#include <iostream>
#include <vector>

int main(){
  int nl=5, nc=4;

  std::vector<std::vector<int>> v(nl,
                                  std::vector<int>(nc,2));

  for(int i=0; i<v.size(); i++){
    for(int j=0; j<v[i].size(); j++){
      std::cout << v[i][j] << " ";
    }
    std::cout << "\n";
  }
    return 0;
}
