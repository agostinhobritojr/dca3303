#ifndef MEDIA_H
#define MEDIA_H
#include <iostream>

template <typename T>
T media(T a, T b){
    return (a+b)/2;
}


/**
 * Uso:
 * int a; float b; double c;
 * c = alo<double, int, float>(a,b);
 *
 */
template<typename T, typename V, class W>
T alo(V a, W b){
    T c;
    c = a + b;
}

template<typename T, int N=10>
void print(T a){
    T vetor[N];
    for(int i=0; i<N; i++){
        vetor[i] = a;
    }
    for(int i=0; i<N; i++){
        std::cout << vetor[i] << " ";
    }
    std::cout << "\n";
}

#endif // MEDIA_H
