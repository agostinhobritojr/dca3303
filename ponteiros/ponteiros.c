#include <stdio.h>

int main(void) {
  int x, y, *px, *py;
  int *pc, c;
  pc = &c;
  printf("pc = %p\n", pc);
  pc = pc + 2;
  printf("pc = %p\n", pc);
  printf("\n\n");

  x = 2;
  px = &x;
  py = &y;
  y = *px;
  printf("&x  = %p\n", &x);
  printf("&y  = %p\n", &y);
  printf("&px = %p\n", &px);
  printf("&py = %p\n", &py);
  printf("px  = %p\n", px);
  printf("tam de x = %ld\n", sizeof(x));
  printf("tam de x = %ld\n", sizeof(int));
}