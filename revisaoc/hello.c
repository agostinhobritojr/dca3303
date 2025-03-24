#include <stdio.h>  // diretiva de inclusao

void printBits(){
  
}

    int main(void) {
  unsigned char x;
  float y;
  long int i, max = 1000000;
  int a = 10, b = 20;
  char c, d, e;

  c = 10;
  d = 20;

  x = max;

  printf("max = %ld e x = %d\n", max, x);
  scanf("%d", &x);

  printf("x = %d\n", x);

  x = max y = 0.1;

  if ((y >= 0.1) && (x == max)) {
    printf("y >= 0.1\n");
  } else {
    printf("y < 0.1\n");
  }

  switch (a) {
    case 10:
      printf("a = 10\n");
      break;
    case 20:
      printf("a = 20\n");
      break;

    default:
      break;
  }

  while (y < 1.0) {
    y += 0.1;
  }

  printf("y = %f\n", y);

  y = 0.1;
  do {
    y += 0.1;
  } while (y < 1.0);

  for (i = 0; i < max; i++) {
    y += 0.1;
  }

  printf("y = %f\n", y);

  //  x = 457257;
  // 1101111101000101001

  //  printf("x = %d\n", x);
  return 0;
}
