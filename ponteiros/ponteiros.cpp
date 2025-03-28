#include <iostream>

int main(void) {
  int x, *px;
  x = 3;
  px = &x;
  printf("x = %d\n", x);
  printf("Valor de  px = %p\n", px);
  printf("Valor de *px = %d\n", *px);
  printf("Valor de &px = %p\n", &px);
  x = 4;
  *px = 4;
  printf("x = %d\n", x);
}