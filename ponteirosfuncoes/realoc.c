#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* myrandom(int n) {
  int *r, i;
  r = malloc(n * sizeof(int));
  for (i = 0; i < n; i++) {
    r[i] = rand();
  }
  return r;
}

void liberamemoria(int* x) {
  if (x != NULL) {
    free(x);
  }
}

int main(void) {
  int* x;

  srand(time(0));
  x = myrandom(20);
  for (int i = 0; i < 20; i++) {
    printf("%d, ", x[i]);
  }
  printf("\n");
  liberamemoria(x);
}