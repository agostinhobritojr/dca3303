#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char nome[50];
  int **x;  // ponteiro para ponteiro para int
  int nl = 3, nc = 3, i, j;

  fgets(nome, 50, stdin);

  // aloca array de ponteiros auxiliares
  x = (int **)malloc(nl * sizeof(int *));
  for (i = 0; i < nl; i++) {
    x[i] = (int *)malloc(nc * sizeof(int));
  }
  x[1][2] = -3;
  *(*(x + 1) + 2) = -3;
  for (i = 0; i < nl; i++) {
    free(x[i]);
  }
  free(x);
  x = NULL;
}