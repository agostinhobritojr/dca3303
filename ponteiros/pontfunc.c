#include <stdio.h>

int funcao(int a) { return a + 1; }

int main(void) {
  int (*pf)(int);
  pf = &funcao;
  printf("valor = %d\n", pf(1));
  printf("&pf = %p\n", &pf);
  printf("pf  = %p\n", pf);
}