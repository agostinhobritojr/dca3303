#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int ***x;
  int nl, nc, np;
  int i, j, k;
  nl = nc = np = 10;
  x = (int ***)malloc(np * sizeof(int **));
  if (x == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return 1;
  }
  for (i = 0; i < nl; i++) {
    x[i] = (int **)malloc(nl * sizeof(int *));
    if (x[i] == NULL) {
      fprintf(stderr, "Memory allocation failed\n");
      return 1;
    }
    for (j = 0; j < nc; j++) {
      x[i][j] = (int *)malloc(nc * sizeof(int));
      if (x[i][j] == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
      }
    }
  }
  for (i = 0; i < nl; i++) {
    for (j = 0; j < nc; j++) {
      for (k = 0; k < np; k++) {
        x[i][j][k] = i + j + k;
      }
    }
  }
  for (i = 0; i < nl; i++) {
    for (j = 0; j < nc; j++) {
      for (k = 0; k < np; k++) {
        printf("%d ", x[i][j][k]);
      }
      printf("\n");
    }
    printf("\n");
  }
  for (i = 0; i < np; i++) {
    for (j = 0; j < nl; j++) {
      free(x[i][j]);
    }
    free(x[i]);
  }
  free(x);
  return 0;
}
