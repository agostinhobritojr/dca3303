#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int** x;
  int nl = 4, nc = 5;

  // aloca vetor auxiliar (para os ponteiros das linhas)
  x = (int**)malloc(nl * sizeof(int*));

  // aloca todas as linhas e guarda os enderecos no vetor auxiliar
  for (int i = 0; i < nl; i++) {
    x[i] = (int*)malloc(nc * sizeof(int));
  }

  for (int i = 0; i < nl; i++) {
    for (int j = 0; j < nc; j++) {
      x[i][j] = i + j;
      // *(*(x + i) + j) = i + j;
    }
  }
  for (int i = 0; i < nl; i++) {
    for (int j = 0; j < nc; j++) {
      printf("%2d ", x[i][j]);
    }
    printf("\n");
  }
  // libera a memoria das linhas
  for (int i = 0; i < nl; i++) {
    free(x[i]);
  }
  // libera vetor auxiliar
  free(x);
}