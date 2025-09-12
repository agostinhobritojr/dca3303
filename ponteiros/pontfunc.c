#include <stdio.h>

int funcao(int a) { return a + 1; }

int main(void) {
  int (*pf)(int);
  pf = &funcao;

  printf("end pf = %p\n", &pf);
  printf("    pf = %p\n", pf);

  //  int *pf2(int); NAO EH PONTEIRO PARA FUNSSAO

  printf("valor = %d\n", pf(1));
}
