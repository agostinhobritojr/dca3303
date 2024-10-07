#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// m: numero de elementos antigo
// n: numero de elementos novo
int *myrealloc(int *x, int m, int n) {
  int *y;
  if (m == n) {
    return x;
  }
  y = (int *)malloc(n * sizeof(int));
  if (m > n) {
    memcpy(y, x, n * sizeof(int));
  } else if (m < n) {
    memcpy(y, x, m * sizeof(int));
  }
  free(x);  // libera o bloco desnecessario
  return y;
}

int main(void) {
  int *x;
  int n, m, i;
  m = 10;
  x = (int *)malloc(m * sizeof(int));
  srand(time(0));
  for (i = 0; i < m; i++) {
    x[i] = rand() % 100;
  }
  printf("%p: ", x);
  for (i = 0; i < m; i++) {
    printf("%2d, ", x[i]);
  }
  printf("\n");
  n = 5;
  x = myrealloc(x, m, n);
  printf("%p: ", x);
  for (i = 0; i < n; i++) {
    printf("%2d, ", x[i]);
  }
  printf("\n");
  free(x);
}