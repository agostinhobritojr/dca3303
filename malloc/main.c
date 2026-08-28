#include <stdio.h>
#include <stdlib.h> // para malloc()/free()
#include <string.h> // para memcpy()

int main(){
  int *x, *y;
  int n;
  printf("Digite n: ");
  scanf("%d", &n);
  x = (int*) malloc(n * sizeof(int));
  if(x == NULL){
     return 0;
  }
  y = (int*) malloc(n * sizeof(int));
  if(y == NULL){
     return 0;
  }

  printf("&n = %p\n", &n);
  printf("&x = %p\n", &x);
  printf(" x = %p\n", x);

  x[0] = 3;
  x[2] = -6;

//  for(int i=0; i<n; i++){
//    y[i] = x[i];
//  }

  // copia n*tam bytes de x -> y
  memcpy(y, x, n * sizeof(int));

  x[2] = 8;

  for(int i=0; i<n; i++){
     printf("%d, ", y[i]);
  }
  printf("\n");
  free(x);
  free(y);
  x = NULL;
  free(x);
  return 0;
}



