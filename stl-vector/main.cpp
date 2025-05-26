#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

int main(){
    std::vector<int> v, v1(100), v2(30,5);
    std::vector<int>::iterator it;
    v.push_back(3);
    v.push_back(6);
    v.push_back(-9);
    v.push_back(27);   // [3]
    v.push_back(5);
    v.push_back(8);
  //  v.clear();

    for(size_t i=0; i<v.size(); i++){
        std::cout << std::setw(2) << v[i] << " ";
    }
    std::cout << std::endl;

    for(it = v.begin(); it != v.end(); it++){
        std::cout << std::setw(2) << *it << " ";
    }
//    std::cout << "\n";
//    std::cout << std::flush;
    std::cout << std::endl;

 //   it = v.begin();
 //   it = it+3;
 //   v.erase(it);
    //    v.erase(v.begin()+3);

    it = std::find(v.begin(), v.end(), 5);
    v.erase(it);

    // c++
    for(auto i: v){
        std::cout << std::setw(2) << i << " ";
    }
    std::cout << std::endl;



    return 0;
}



