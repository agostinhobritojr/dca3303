#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    for(int i=0; i<v.size(); i++){
        std::cout << v[i] << " ";
    }
    std::cout << "\n";

    v[1] = -9;

    for(int i=0; i<v.size(); i++){
        std::cout << v[i] << " ";
    }
    std::cout << "\n";
    return 0;
}
