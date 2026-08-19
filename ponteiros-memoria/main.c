#include <stdio.h>

int main(){
  int *px, *py, x, y;
  x = 10;
  px = &x;
  y = *px;
  printf("tamanho de px = %d\n", sizeof(px));
  printf("x   = %d\n", x);
  printf("&x  = %p\n", &x);
  printf("&y  = %p\n", &y);
  printf("&px = %p\n", &px);
  printf("&py = %p\n", &py);
}








