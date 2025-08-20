#include <stdio.h>

int y;

int main(int argc, char* argv[]) {
  unsigned int x;
  int i, j;

  i = 1;
  j = 2;

  printf("%d\n", i > 0);

  if (i > 0 && j < 3) {
    printf("i = %d\n", i);
  }

  if (6 & 2) {
    printf("alou\n");
  } else if (5 > 3) {
    printf("maria\n");
  } else {
    printf("jose\n");
  }

  switch (i) {
    case 1:
      printf("case 1\n");
      break;
    case 2:
    case 3:
      printf("case 2\n");
      break;
    default:
      printf("default case\n");
      break;
  }

  for (i = 0, j = 4; i < 10; i = i + 2, j--) {
    printf("i = %d\n", i);
  }
  printf("Ai = %d\n", i);

  for (i = 0; i < 5; i++) {
    printf("i = %d\n", i);
  }

  printf("Ai = %d\n", i);

  j = 4;
  while (j > 0) {
    printf("j = %d\n", j);
    j--;
  }

  j = 4;
  do {
    printf("j = %d\n", j);
    j--;
  } while (j > 0);

  //  x = a  - b;
  //  printf("x = %u\n", x);
  //  scanf("%d", &x);
  //  printf("x = %d\n", x);
  return 0;
}
