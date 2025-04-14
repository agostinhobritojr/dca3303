#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* myrealloc(int* x, int nold, int nnew);

int main(void) {
  int *x, nold, nnew;
  nold = 5;
  nnew = 3;
  x = malloc(nold * sizeof(int));
  for (int i = 0; i < nold; i++) {
    x[i] = rand() % 100;
  }
  printf("%p: ", x);
  for (int i = 0; i < nold; i++) {
    printf("%d ", x[i]);
  }
  printf("\n");
  // x <- A
  x = myrealloc(x, nold, nnew);
  // x <- B
  printf("%p: ", x);
  for (int i = 0; i < nnew; i++) {
    printf("%d ", x[i]);
  }
  printf("\n");

  x = realloc(x, 100);
  printf("%p: ", x);
  printf("\n");
  x = realloc(x, 100);
  printf("%p: ", x);
  printf("\n");
  x = realloc(x, 200);
  printf("%p: ", x);
  printf("\n");
  x = realloc(x, 50);
  printf("%p: ", x);
  printf("\n");
  x = realloc(x, 100);
  printf("%p: ", x);
  printf("\n");
}

int* myrealloc(int* x, int nold, int nnew) {
  int* y;
  // nold == nnew
  if (nold == nnew) {
    return x;
  }
  y = malloc(nnew * sizeof(int));
  // nold < nnew
  if (nold < nnew) {
    memcpy(y, x, nold * sizeof(int));
  }
  // nold > nnew
  else {
    memcpy(y, x, nnew * sizeof(int));
  }
  free(x);
  return y;
}