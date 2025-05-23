#include <iostream>
#include <vector>

int main(){
    std::vector<int> v, v1(100), v2(30,5);

    v.push_back(3);
    v.push_back(6);
    v.push_back(-9);

    for(int i=0; i<v.size(); i++){
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
