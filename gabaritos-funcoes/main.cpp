#include <iostream>

template <typename T>
T media(T a, T b){
    return (a+b)/2;
}

template <typename T, typename U>
U alo(T a, U b){
    U x;
    x = a-b;
    return x;
}

template <typename T, int N=10>
void alo(T x){
    T vetor[N];
    for(int i=0; i<N; i++){
        vetor[i] = x;
    }
}

int main(){
    int a=1, b=2, c=3;
    float x=4, y=5, z=6;

    std::cout << media<float>(a,x) << std::endl;

    alo<int, 100>(38);
    alo<int>(29);

    c = media<int>(a, b);
    std::cout << "c = " << c << std::endl;
    c = media(a, b);
    std::cout << "c = " << c << std::endl;
    z = media<float>(x, y);
    std::cout << "z = " << z << std::endl;
    z = media(x, y);
    std::cout << "z = " << z << std::endl;
    return 0;
}
