#include <stdio.h>

int main(void) {
  double a = 0;
  unsigned int i;
  for (i = 0; i < 1000000; i++) {
    a = a + 0.1;
  }
  printf("a = %lf\n", a);
}
