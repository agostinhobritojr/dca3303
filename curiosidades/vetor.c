#include <stdio.h>

int main(void) {
  int x[5], i;
  1 [x] = -3;

  for (i = 0; i < 5; i++) {
    printf("%d, ", x[i]);
  }
  printf("\n");
}