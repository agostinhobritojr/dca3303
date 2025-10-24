#include <iostream>
#include <queue>
#include <vector>

int main(){
    std::vector<int> v;
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    std::cout << v[1] << std::endl;
    v[1] = -1;
    std::cout << v[1] << std::endl;
    return 0;
}
