#include <stdio.h>  // diretiva de inclusao

int main(void) {
  unsigned char x;
  float y;
  long int i, max = 1000000;

  x = max;

  printf("max = %ld e x = %d\n", max, x);

  y = 0.1;

  for (i = 0; i < max; i++) {
    y += 0.1;
  }

  printf("y = %f\n", y);

  //  x = 457257;
  // 1101111101000101001

  //  printf("x = %d\n", x);
  return 0;
}
