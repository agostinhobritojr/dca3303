#include <stdio.h>

int main(void) {
  int x, *px;
  x = 3;
  printf(" &x = %p\n", &x);
  printf("&px = %p\n", &px);
  printf("\n");
  printf("px = %p\n", px);
  px = &x;
  printf("px = %p\n", px);

  printf("  x = %d\n", x);
  printf("*px = %d\n", *px);
}
