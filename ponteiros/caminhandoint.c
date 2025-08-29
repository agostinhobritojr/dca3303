#include <stdio.h>

void printBits(unsigned char c) {
  unsigned char bit;
  for (bit = 128; bit; bit >>= 1) {
    if (c & bit) {
      printf("1");
    } else {
      printf("0");
    }
  }
}

int main() {
  float a = 3;
  unsigned char *p;
  p = (unsigned char *)&a;
  printf("|");
  printBits(*(p + 3));
  printf("|");
  printBits(*(p + 2));
  printf("|");
  printBits(*(p + 1));
  printf("|");
  printBits(*(p + 0));
  printf("|");
  printf("\n");
  return 0;
}
