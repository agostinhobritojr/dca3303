// diretiva de compilacao
#include <math.h>
#include <stdio.h>

int f(int x);

int main(void) {
  unsigned int a, b, c;
  unsigned char x;
  x = 269;
  printf("x = %u\n", x);
  a = 3;
  b = f(a);

  c = b > 0;
  printf("c = %d\n", c);

  if (b > 0 && a < 30) {
    printf("b = %d\n", b);
  } else {
    printf("b = %d\n", b);
  }
  //  scanf("%d %d", &a, &b);
  //  printf("a = %d, b = %d\n", a, b);
}

int f(int x) { return x + 1; }