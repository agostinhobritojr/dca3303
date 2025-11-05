#include <iostream>

using namespace std;

class A{
    int x;
public:
    void setX(int x_) { x = x_; }
    void print(){
        std::cout << "x = " << x << "\n";
    }
};

class B{
    int y;
public:
    void setY(int y_) { y = y_;}
    void print(){
        std::cout << "y = " << y << "\n";
    }
};

class C : public A, public B{
    int z;
public:
    void setZ(int z_) {z = z_;}
    void printz(){
        std::cout << "z = " << z << "\n";
    }
};

int main()
{
    C c;
    c.setX(3);
    c.setY(4);
    c.setZ(5);
    c.A::print();
    c.B::print();
    c.printz();
    return 0;
}
