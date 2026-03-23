#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int** x;
  int** y;
  int nl = 4, nc = 5;

  // aloca vetor auxiliar (para os ponteiros das linhas)
  x = (int**)malloc(nl * sizeof(int*));
  // aloca todas as linhas em sequencia
  x[0] = (int*)malloc(nl * nc * sizeof(int));

  // fixar os ponteiros auxiliares
  for (int i = 1; i < nl; i++) {
    x[i] = x[i - 1] + nc;
  }

  // aloca vetor auxiliar (para os ponteiros das linhas)
  y = (int**)malloc(nl * sizeof(int*));
  y[0] = (int*)malloc(nl * nc * sizeof(int));
  // fixar os ponteiros auxiliares
  for (int i = 1; i < nl; i++) {
    y[i] = y[i - 1] + nc;
  }

  for (int i = 0; i < nl; i++) {
    for (int j = 0; j < nc; j++) {
      x[i][j] = i + j;
    }
  }

  memcpy(y[0], x[0], sizeof(int) * nl * nc);

  /*
    for (int i = 0; i < nl; i++) {
      for (int j = 0; j < nc; j++) {
        y[i][j] = x[i][j];
      }
    }
      */

  for (int i = 0; i < nl; i++) {
    for (int j = 0; j < nc; j++) {
      printf("%2d ", y[i][j]);
    }
    printf("\n");
  }

  free(x[0]);
  free(x);
}