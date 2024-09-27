#include <stdio.h>

void printbits(unsigned char c) {
  unsigned char bit, a;
  for (bit = 128; bit > 0; bit = bit / 2) {
    a = c & bit;
    if (a > 0) {
      printf("1");
    } else {
      printf("0");
    }
  }
}

int main(void) {
  float x;
  unsigned char c, *pc;
  unsigned char a, b;
  pc = &x;

  x = 0.1;
  printf("|");
  printbits(*(pc + 3));
  printf("|");
  printbits(*(pc + 2));
  printf("|");
  printbits(*(pc + 1));
  printf("|");
  printbits(*(pc + 0));
  printf("|\n");

  x = -0.1;
  printf("|");
  printbits(*(pc + 3));
  printf("|");
  printbits(*(pc + 2));
  printf("|");
  printbits(*(pc + 1));
  printf("|");
  printbits(*(pc + 0));
  printf("|\n");
  a = 90;
  b = 201;
  c = a & b;
  /*  printbits(a);
    printf("\n");
    printbits(b);
    printf("\n");
    printbits(c);
    printf("\n");
    */
}