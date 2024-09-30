#include <stdio.h>
#include <stdlib.h>  // para malloc()

int main(void) {
  int n, i, y[10];
  int *x;
  n = 10;  // numero de valores
  x = (int *)malloc(n * sizeof(int));
  x[0] = 3;
  x[3] = -4;
  for (i = 0; i < n; i++) {
    printf("x[%d] = %d\n", i, x[i]);
  }
  free(x);
  printf("&y = %p\n", &y);
  printf("&i = %p\n", &i);
  printf("&n = %p\n", &n);
  printf("&x = %p\n", &x);
  printf(" x = %p\n", x);
  // x[3] = 99;
  printf("x[3] = %d\n", x[3]);
  x = NULL;
  free(x);
  //  free(4002);
}