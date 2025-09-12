#include <stdio.h>

typedef struct alo {
  int a;
  int b;
  int c;
  char d;
  char e;
  char f;
} alo;

int main(void) {
  struct alo x, *px;
  alo y;
  printf("tamanho = %ld\n", sizeof(alo));
  x.a = 1;
  y.a = 2;
  px = &x;
  printf("x.a = %d\n", px->a);
  printf("y.a = %d\n", y.a);
}