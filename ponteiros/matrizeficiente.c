#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int y[2][3], z[2][3];
  int **x;
  int nl = 2, nc = 3;
  x = (int **)malloc(nl * sizeof(int *));
  x[0] = (int *)malloc(nl * nc * sizeof(int *));
  x[1] = x[0] + nc;

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      y[i][j] = i * nc + j + 1;
    }
  }

  memcpy(z, y, 2 * 3 * sizeof(int));

  /*
   for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 3; j++) {
        z[i][j] = y[i][j];
      }
    }
  */

  for (int i = 0; i < nl; i++) {
    for (int j = 0; j < nc; j++) {
      printf("%d ", z[i][j]);
    }
    printf("\n");
  }

  x[0][0] = 1;
  for (int i = 1; i < nl * nc; i++) {
    x[0][i] = x[0][i - 1] + 1;
  }

  //  printf("valor = %d\n", x[1][-1]);

  free(x[0]);
  free(x);

  //  printf("%p \n%p\n", &y[0][2], &y[1][0]);
}
