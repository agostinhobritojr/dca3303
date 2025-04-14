#include <stdio.h>

struct cliente {
  int id;
  char nome[400];
  int fone;
  int teste;
  char letra;
  int letra1;
};
int main(void) {
  struct cliente jose, *pc;

  printf("tam = %ld\n", sizeof(struct cliente));

  pc = &jose;
  pc->id = 14394;
  printf("id = %d\n", pc->id);
  printf("id = %d\n", (*pc).id);
  printf("digite o fone: ");
  // scanf("%d", &pc->fone);
  printf("fone = %d\n", pc->fone);
}