#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    std::vector< std::vector<int> >
    matriz(3,
               std::vector<int> (4,1));

    for(int i=0; i<matriz.size(); i++){
        for(int j=0; j<matriz[0].size(); j++){
            std::cout << matriz[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";



    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    for(size_t i=0; i < v.size(); i++){
        std::cout << v[i] << std::endl;
    }
    v.pop_back();
    std::cout << "\n";
    for(size_t i=0; i < v.size(); i++){
        std::cout << v[i] << std::endl;
    }
    return 0;
}
