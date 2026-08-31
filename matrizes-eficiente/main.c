#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int **x, **y;
  int nl, nc;
  nl = 2; nc = 3;
  // alocar array auxiliar
  x = (int**) malloc(nl * sizeof(int*));
  y = (int**) malloc(nl * sizeof(int*));
  // alocar o bloco completo da matriz
  // e armazenar o endereco dele em x[0] <- A
  x[0] = (int*) malloc(nl * nc * sizeof(int));
  y[0] = (int*) malloc(nl * nc * sizeof(int));
  for(int i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
    y[i] = y[i-1] + nc;
  }
  x[0][0] = 2;
  x[0][1] = 3;
  x[0][2] = 4;
  x[1][0] = -1;
  x[1][1] = 3;
  x[1][2] = 10;

  memcpy(y[0], x[0], nl*nc*sizeof(int));

  for(int i=0; i<nl; i++){
     for(int j=0; j<nc; j++){
         printf("%3d ", y[i][j]);
     }
     printf("\n");
  }
  printf("\n");
  printf("x[0][2] = %d\n", x[1][-1]);

  // PREMEIRO libera a matriz completa
  free(x[0]);
  // DEPOIS libera o array auxiliar
  free(x);

  free(y[0]);
  // DEPOIS libera o array auxiliar
  free(y);

  return 0;
}
