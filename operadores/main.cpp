#include <iostream>

class Alo{
    int x;
public:
    Alo(int x=0){
        this->x = x;
    }
    Alo operator+ (Alo a){
        Alo ret(0);
        ret.x = x + a.x;
        return ret;
    }
    float operator+ (float a){
        return x+a;
    }
    void print(){
        std::cout << "alo:x = " << x << std::endl;
    }
    friend std::ostream& operator <<
        (std::ostream& os, Alo& a){
        os << "alo[" << a.x << "]";
        return os;
    }
    friend std::istream& operator >>
        (std::istream& is, Alo& a){
        is >> a.x ;
        return is;
    }

};

int main(){
    Alo a1(3), a2(5), a3;
    a3 = a1 + a2;
 //   a3 = a1.operator+(a2);
//    a3.print();
    std::cout << "digite x: ";
    std::cin >> a3;
    std::cout << "a3 = " << a3 << "\n";
    return 0;
}










