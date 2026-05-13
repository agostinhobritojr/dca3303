#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> v;
    std::vector<int>::iterator it;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.resize(10);
    v[6] = 8;
    v[8] = 8;

    for(it = v.begin(); it != v.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << "\n";

    it = std::find(v.begin(), v.end(), 8);
    std::cout << "posicao = " << std::distance(v.begin(), it);
    std::cout << "\n";
    std::cout << "valor = " << *it << "\n";

    v.erase(it);
    for(it = v.begin(); it != v.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << "\n";
    it = v.begin();
    std::advance(it, 2);
    std::cout << "valor = " << *it << "\n";

/*    for(int i=0; i<v.size(); i++){
        std::cout << v[i] << " ";
    }
*/

    v[1] = 9;

    for(int i=0; i<v.size(); i++){
        std::cout << v[i] << " ";
    }
    std::cout << "\n";
    return 0;
}
