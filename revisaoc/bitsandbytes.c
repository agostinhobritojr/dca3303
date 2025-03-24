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

// int main(int argc, char* argv[])
int main(void) {
  int a = 3, b = 4;
  int c = 129;

  printBits(c);

  /*
    if ((a = 4) & (b == 4)) {
      printf("alo\n");
    } else {
      printf("maria\n");
    }
  */
  return 0;
}
