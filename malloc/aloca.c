#include <stdio.h>
#include <stdlib.h>  // para malloc()

int main(void) {
  int *x;
  size_t n;
  printf("digite n: ");
  scanf("%d", &n);
  x = (int *)malloc(n * sizeof(int));

  if (x == NULL) {
    printf("memoria nao alocada\n");
  }

  printf("&x = %p\n", &x);
  printf(" x = %p\n", x);

  x[3] = 4;
  for (int i = 0; i < n; i++) {
    printf("%d, ", x[i]);
  }
  printf("\n");
  // free(x);  // para cada malloc() DEVE haver UM free()7
  while (x != NULL) {
    free(x);
    x = NULL;
  }
  printf("passou aqui\n");
}