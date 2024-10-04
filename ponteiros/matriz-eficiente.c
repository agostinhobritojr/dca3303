#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int **x;  // ponteiro para ponteiro para int
  int nl = 3, nc = 3, i, j;

  // aloca array de ponteiros auxiliares
  x = (int **)malloc(nl * sizeof(int *));
  // aloca a matriz inteira
  x[0] = malloc(nl * nc * sizeof(int));

  // fixacao dos ponteiros das linhas
  for (i = 1; i < nl; i++) {
    x[i] = x[i - 1] + nc;
  }
  x[0][0] = 4;
  x[0][1] = 5;
  x[0][2] = 6;
  x[1][0] = 1;
  x[1][1] = 9;
  x[1][2] = -3;
  x[2][0] = 0;
  x[2][1] = 0;
  x[2][2] = 8;

  printf("valor = %d\n", x[0][-1]);

  free(x[0]);
  free(x);
  x = NULL;
}