#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// alocar matriz
// [[1  3  8]
//  [4 -1  0]]
int main(void) {
  int **x, **y;
  int nl = 20000, nc = 30000;
  //  printf("Digite numero de linhas: ");
  //  scanf("%d", &nl);
  // aloca array auxiliar
  x = malloc(nl * sizeof(int *));
  y = malloc(nl * sizeof(int *));

  // *x = malloc(nl * nc * sizeof(int));
  x[0] = malloc(nl * nc * sizeof(int));
  y[0] = malloc(nl * nc * sizeof(int));
  // x[1] = x[0] + nc;

  // fixacao dos ponteiros para as linhas
  for (int i = 1; i < nl; i++) {
    x[i] = x[i - 1] + nc;
  }
  for (int i = 1; i < nl; i++) {
    y[i] = y[i - 1] + nc;
  }
  // preenche x
  for (int i = 0; i < nl; i++) {
    for (int j = 0; j < nc; j++) {
      x[i][j] = rand() % 100;
    }
  }

  clock_t t;

  t = clock();
  for (int i = 0; i < nl; i++) {
    for (int j = 0; j < nc; j++) {
      y[i][j] = x[i][j];
    }
  }
  t = clock() - t;
  printf("It took me %d clicks (%f seconds).\n", t,
         ((float)t) / CLOCKS_PER_SEC);

  t = clock();
  memcpy(y[0], x[0], nl * nc * sizeof(int));
  t = clock() - t;
  printf("It took me %d clicks (%f seconds).\n", t,
         ((float)t) / CLOCKS_PER_SEC);

  /*  for (int i = 0; i < nl; i++) {
      for (int j = 0; j < nc; j++) {
        printf("%2d ", y[i][j]);
      }
      printf("\n");
    }
      */
  free(x[0]);
  free(x);

  free(y[0]);
  free(y);
}