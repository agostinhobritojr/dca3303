#include <stdio.h>  // diretiva de inclusao

void printBits(unsigned char c) {
  unsigned char bit;
  bit = 128;
  if (c & bit) {
    printf("1");
  } else {
    printf("0");
  }
  bit = bit / 2;
  if (c & bit) {
    printf("1");
  } else {
    printf("0");
  }
  bit = bit / 2;
  if (c & bit) {
    printf("1");
  } else {
    printf("0");
  }
  bit = bit / 2;
  if (c & bit) {
    printf("1");
  } else {
    printf("0");
  }
  bit = bit / 2;
  if (c & bit) {
    printf("1");
  } else {
    printf("0");
  }
  bit = bit / 2;
  if (c & bit) {
    printf("1");
  } else {
    printf("0");
  }
  bit = bit / 2;
  if (c & bit) {
    printf("1");
  } else {
    printf("0");
  }
  bit = bit / 2;
  if (c & bit) {
    printf("1");
  } else {
    printf("0");
  }
  printf("\n");
}

// int main(int argc, char* argv[])
int main(void) {
  int a = 3, b = 4;
  int c = 37;

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
