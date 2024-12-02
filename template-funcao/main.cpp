#include <iostream>

template <typename T>
T media(T a, T b){
    return (a+b)/2;
}

int main(){
    int a, b, c;
    float x, y, z;
    a = 1; b = 3;
 //   c = media<int>(a,b);
    c = media<int>(a, x);
    std::cout << "media<int> = " << c << std::endl;

    x = 1; y = 2;
    z = media<float>(x,y);
    std::cout << "media<float> = " << z << std::endl;

    return 0;
}


