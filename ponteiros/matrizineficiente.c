#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int **x, **y;
  int nl = 4, nc = 5;
  // aloca memoria auxiliar para os ponteiros das linhas
  x = (int **)malloc(nl * sizeof(int *));
  // aloca as linhas da matriz
  for (int i = 0; i < nl; i++) {
    x[i] = (int *)malloc(nc * sizeof(int));
  }

  for (int i = 0; i < nl; i++) {
    printf("%p \n", x[i]);
  }
  printf("\n");

  srand(time(0));
  for (int i = 0; i < nl; i++) {
    for (int j = 0; j < nc; j++) {
      x[i][j] = rand() % 100;
    }
  }

  for (int i = 0; i < nl; i++) {
    for (int j = 0; j < nc; j++) {
      printf("%2d ", x[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  y = x;

  x[0][0] = 0;

  for (int i = 0; i < nl; i++) {
    for (int j = 0; j < nc; j++) {
      printf("%2d ", y[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < nl; i++) {
    free(x[i]);
  }
  free(x);
}