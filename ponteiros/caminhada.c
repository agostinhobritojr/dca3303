#include <stdio.h>

int main(void) {
  int *px;
  int x[10];
  x[0] = 1;
  x[1] = 3;
  x[2] = 8;
  px = x;
  // px = (int *)100;
  printf("px = %p; *px = %d\n", px + 0, *(px + 0));
  printf("px = %p; *px = %d\n", px + 1, *(px + 1));
  printf("px = %p; *px = %d\n", px + 2, *(px + 2));

  printf("px = %p; *px = %d\n", px + 0, px[0]);
  printf("px = %p; *px = %d\n", px + 1, px[1]);
  printf("px = %p; *px = %d\n", px + 2, px[2]);

  return 0;
}