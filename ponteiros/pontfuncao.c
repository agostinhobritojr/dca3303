#include <stdio.h>
#include <stdlib.h>

int funcao(int a) { return a + 1; }
int main(void) {
  int (*pf)(int) = &funcao;
  int *x;
  x = malloc(10);
  printf("x     = %p\n", x);
  printf("pf    = %p\n", pf);
  printf("valor = %d\n", pf(1));
  free(x);
}
