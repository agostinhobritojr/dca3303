#include <stdio.h>

void troca(int* a, int* b) {
  int tmp;
  printf("&a = %p; &b = %p\n", &a, &b);
  printf("a = %d; b = %d\n", *a, *b);
  tmp = *a;
  *a = *b;
  *b = tmp;
  printf("a = %d; b = %d\n", *a, *b);
}

int main(void) {
  int x = 3, y = 4;
  printf("x = %d; y = %d\n", x, y);
  printf("&x = %p; &y = %p\n", &x, &y);
  troca(&x, &y);
  printf("x = %d; y = %d\n", x, y);
  return 0;
}