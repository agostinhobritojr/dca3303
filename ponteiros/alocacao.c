#include <stdio.h>
#include <stdlib.h>  // para malloc()

int main(void) {
  int n, i, y[10];
  int *x, *z;
  n = 10;  // numero de valores
  x = (int *)malloc(n * sizeof(int));
  z = (int *)malloc(n * sizeof(int));
  if (x == NULL) {
    exit(0);
  }
  if (z == NULL) {
    exit(0);
  }
  x[0] = 3;
  x[3] = -4;
  for (i = 0; i < n; i++) {
    z[i] = x[i];
  }
  for (i = 0; i < n; i++) {
    printf("z[%d] = %d\n", i, z[i]);
  }
  x[1] = 8;
  printf("\n");
  for (i = 0; i < n; i++) {
    printf("z[%d] = %d\n", i, z[i]);
  }
  free(x);
  free(z);
  z = NULL;
  free(z);
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