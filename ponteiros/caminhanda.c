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
  printf("\n");
}

int main(void) {
  int a = 3, b = 4;
  int c = -255;

  unsigned char *pi;

  pi = &c;

  printf("*pi = %d\n", *pi);

  pi = pi + 1;

  printf("*pi = %d\n", *pi);

  //  printBits(c);

  return 0;
}
