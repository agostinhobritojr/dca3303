#include <stdio.h>
#include <stdlib.h>

// alocar matriz
// [[1  3  8]
//  [4 -1  0]]
int main(void) {
  int **x;
  int nl = 2, nc = 3;
  // aloca array auxiliar
  x = malloc(nl * sizeof(int *));
  for (int i = 0; i < nl; i++) {
    x[i] = malloc(nc * sizeof(int));
  }

  printf("x    = %p\n", x);
  printf("x+1  = %p\n", x + 1);
  printf("x[0] = %p\n", x[0]);
  printf("x[1] = %p\n", x[1]);

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
  for (int i = 0; i < nl; i++) {
    free(x[i]);
  }
  free(x);
}