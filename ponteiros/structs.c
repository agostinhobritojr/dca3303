#include <stdio.h>
#include <stdlib.h>

struct alo {
  int a;
  char d;
  char e;
  short f;
  int b;
  int c;
};

int main(void) {
  struct alo a, *pa;

  printf("tam(a) = %d\n", sizeof(a));

  a.a = 4;
  a.b = 5;
  pa = &a;
  printf("%d, %d\n", pa->a, pa->b);
  printf("%p, %p\n", &(pa->a), &(pa->b));
}