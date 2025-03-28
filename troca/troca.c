#include <stdio.h>

int w, z;  // variavel global

void troca(int *a, int *b) {
  int tmp;
  printf("&tmp = %p\n", &tmp);

  printf("*a = %d; *b = %d\n", *a, *b);
  tmp = *a;
  *a = *b;
  *b = tmp;
  printf("*a = %d; *b = %d\n", *a, *b);
}
int main(void) {
  int x = 3, y = 4;
  printf("&z = %p\n", &z);
  printf("&w = %p\n", &w);
  printf("&x = %p, &y = %p\n", &x, &y);
  printf("x = %d; y = %d\n", x, y);
  // passagem de parametros POR ENDERECO
  troca(&x, &y);
  printf("x = %d; y = %d\n", x, y);
  return 0;
}
