#include <stdio.h>

int main(void) {
  unsigned int x, y, z;

  x = 3;
  y = 4;
  z = x - y;

  z = x > 0;

  printf("%u\n", z);

  if (x > 0) {
    printf("Positivo\n");
  } else if (x < 0) {
    printf("Negativo\n");
  } else {
    printf("Zero\n");
  }

  switch (x) {
    case 1:
      printf("x igual a um\n");
      break;
    case 2:
    case 3:
      printf("x igual a dois ou tres\n");
      break;
    default:
      break;
  }
  int i, j = 0;

  for (i = 0; i < 10; i++, j++) {
    printf("%d\n", i);
    printf("terminou\n");
  }

  j = 0;

  while (j < 10) {
    printf("%d\n", j);
    j++;
  }

  j = 0;

  do {
    printf("%d\n", j);
    j++;
  } while (j < 10);

  //  while (1) {
  for (;;) {
    printf("Loop infinito\n");
  }
}
