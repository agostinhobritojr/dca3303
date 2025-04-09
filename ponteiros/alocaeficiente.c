#include <stdio.h>
#include <stdlib.h>

// alocar matriz
// [[1  3  8]
//  [4 -1  0]]
int main(void) {
  int **x;
  int nl = 2, nc = 3;
  //  printf("Digite numero de linhas: ");
  //  scanf("%d", &nl);
  // aloca array auxiliar
  x = malloc(nl * sizeof(int *));

  // *x = malloc(nl * nc * sizeof(int));
  x[0] = malloc(nl * nc * sizeof(int));
  // x[1] = x[0] + nc;

  // fixacao dos ponteiros para as linhas
  for (int i = 1; i < nl; i++) {
    x[i] = x[i - 1] + nc;
  }

  {
    x[0][0] = 1;
    x[0][1] = 3;
    x[0][2] = 8;
    x[1][0] = 4;
    x[1][1] = -1;
    x[1][2] = 0;
  }
  for (int i = 0; i < nl; i++) {
    for (int j = 0; j < nc; j++) {
      printf("%2d ", x[i][j]);
    }
    printf("\n");
  }
  free(x[0]);
  free(x);
}