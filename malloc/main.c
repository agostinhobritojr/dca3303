#include <stdio.h>
#include <stdlib.h>

int main(){
  int *x, *y;
  int n;
  printf("Digite n: ");
  scanf("%d", &n);
  x = (int*) malloc(n * sizeof(int));
  if(x == NULL){
     return 0;
  }
  y = x;
  printf("&n = %p\n", &n);
  printf("&x = %p\n", &x);
  printf(" x = %p\n", x);

  x[0] = 3;
  x[2] = -6;

  for(int i=0; i<n; i++){
     printf("%d, ", y[i]);
  }
  printf("\n");
  free(x);
  x = NULL;
  free(x);
  return 0;
}



