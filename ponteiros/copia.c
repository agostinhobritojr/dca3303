#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, *x, *y;
  n = 10;
  x = (int*)malloc(n * sizeof(int));
  x = (int*)malloc(n * sizeof(int));

  for (int i = 0; i < n; i++) {
    x[i] = rand() % 100;
  }
  for (int i = 0; i < n; i++) {
    printf("%2d, ", x[i]);
  }
  printf("\n");
  y = x;
  for (int i = 0; i < n; i++) {
    printf("%2d, ", x[i]);
  }
  printf("\n");
  free(x);
  //  free(y);
}