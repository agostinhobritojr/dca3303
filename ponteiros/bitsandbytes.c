#include <stdio.h>

void printbits(unsigned char c) {
  unsigned char bit;
  for (bit = 128; bit; bit >>= 1) {
    if (bit & c) {
      printf("1");
    } else {
      printf("0");
    }
  }
}

int main(void) {
  float x;
  unsigned char c, *p;
  //  c = 261;
  //  printbits(c);
  //  printf("\n");
  x = 0.1;
  // casting - conversao de tipo
  p = (unsigned char*)&x;
  //  printf(" p = %p\n", p);
  //  printf("*p = %d\n", *p);
  printf("|");
  printbits(*(p + 3));
  printf("|");
  printbits(*(p + 2));
  printf("|");
  printbits(*(p + 1));
  printf("|");
  printbits(*(p + 0));
  printf("|");
  printf("\n");

  printf("|");
  printbits(p[3]);
  printf("|");
  printbits(p[2]);
  printf("|");
  printbits(p[1]);
  printf("|");
  printbits(p[0]);
  printf("|");
  printf("\n");
}