#include <stdio.h>  // diretiva de inclusao

void printBits(unsigned char c) {
  unsigned char bit;
  for (bit = 128; bit > 0; bit >>= 1) {
    if (c & bit) {
      printf("1");
    } else {
      printf("0");
    }
  }
}

int main(void) {
  int a = 3, b = 4;
  int c;

  c = 3 - 5;

  unsigned char *pi;

  /*
  printf("pi = %p\n", pi);
  pi = pi + 1;
  printf("pi = %p\n", pi);

  return 0;
  */

  pi = &c;

  printf("|");
  printBits(*(pi + 3));
  printf("|");
  printBits(*(pi + 2));
  printf("|");
  printBits(*(pi + 1));
  printf("|");
  printBits(*(pi + 0));
  printf("|");
  printf("\n");

  printf("|");
  printBits(pi[3]);
  printf("|");
  printBits(pi[2]);
  printf("|");
  printBits(pi[1]);
  printf("|");
  printBits(pi[0]);
  printf("|");
  printf("\n");

  return 0;
}
