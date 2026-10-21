#include <iostream>
#include <vector>

int main (){
  std::vector<int> v(5, 10);
  std::vector<int>::iterator it;
  v.push_back(3);
  v.push_back(5);
  v.push_back(-10);
  v.pop_back();
  v.erase(v.begin()+2);
  v.insert(v.begin()+2, 38);me

  for(it = v.begin(); it != v.end(); it++){
    std::cout << *it << " ";
  }
  std::cout << std::endl;

/*
  for(int i=0; i<v.size(); i++){
    std::cout << v[i] << std::endl;
  }
*/
  return 0;
}
