#include <stdio.h>

int main(void) {
  int x, y, *px, *py;
  x = 5;
  px = &x;
  printf(" &m = %p\n", main);
  printf(" &x = %p\n", &x);
  printf(" &y = %p\n", &y);
  printf("&px = %p\n", &px);
  printf("&py = %p\n", &py);
  printf(" px = %p\n", px);
  return 0;
}