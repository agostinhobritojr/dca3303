#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* myrandom(int n) {
  int *r, i;
  r = (int*)malloc(n * sizeof(int));
  for (i = 0; i < n; i++) {
    r[i] = rand() % 100 + 1;
  }
  return r;
}

int main() {
  int *x, n = 10;
  srand(time(NULL));
  x = myrandom(n);
  for (int i = 0; i < n; i++) {
    printf("%d, ", x[i]);
  }
  printf("\n");
  free(x);
  return 0;
}
