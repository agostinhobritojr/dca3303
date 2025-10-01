#include <iostream>

void f(char c) { std::cout << "c\n"; }

void f(int i) { std::cout << "i\n"; }

void f(long l) { std::cout << "l\n"; }

int main(void) {
  char alo;
  f(alo);
  f(alo + alo);
}