#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int* x;
  int n = 10;
  x = (int*)malloc(10 * sizeof(int));
  if (x == NULL) {
    printf("alocacao falhou\n");
    exit(0);
  }
  printf("&x = %p\n", &x);
  printf(" x = %p\n", x);
  x[0] = -16;
  for (int i = 0; i < 10; i++) {
    printf("%d, ", x[i]);
  }
  printf("\n");
  free(x);
  x = NULL;

  for (int i = 0; i < 10; i++) {
    printf("%d, ", x[i]);
  }

  printf("(pos-free) x = %p\n", x);
  free(x);
}