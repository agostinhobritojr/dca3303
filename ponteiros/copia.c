#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int n, *x, *y;
  n = 10;
  x = (int*)malloc(n * sizeof(int));
  y = (int*)malloc(n * sizeof(int));
  // srand(3);
  for (int i = 0; i < n; i++) {
    x[i] = rand() % 100;
  }
  for (int i = 0; i < n; i++) {
    printf("%2d, ", x[i]);
  }
  printf("\n");

  //  for (int i = 0; i < n; i++) {
  //    y[i] = x[i];
  //  }

  memcpy(y, x, n * sizeof(int));

  y[0] = 1;
  for (int i = 0; i < n; i++) {
    printf("%2d, ", y[i]);
  }
  printf("\n");
  free(x);
  free(y);
}