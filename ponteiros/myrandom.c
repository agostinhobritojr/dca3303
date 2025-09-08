#include <stdio.h>
#include <stdlib.h>

int *myrandom(int n) {
  int *r, i;
  r = malloc(n * sizeof(int));
  for (i = 0; i < n; i++) {
    r[i] = rand();
  }
  return r;
}

int main(void) {
  int *x, n = 10;
  x = myrandom(n);
  for (int i = 0; i < n; i++) {
    printf("%d\n", x[i]);
  }
  printf("\n");
  free(x);
}