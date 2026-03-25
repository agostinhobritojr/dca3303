#include <stdio.h>

struct alo {
  int a;
  int b;
  int c;
  // memory alignment 
  char e;
  char d;
  char f;
};

int main(void) {
  struct alo x;
  x.a = 3;
  x.b = -4;
  x.c = 1;
  printf("tam x = %ld\n", sizeof(x));
  printf("x.a = %d\n", x.a);
}