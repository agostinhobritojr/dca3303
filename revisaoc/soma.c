#include <stdio.h>

// int main(void) {
int main(int argc, char* argv[]) {
  double a = 0;
  unsigned int i;

  printf("argc = %d\n", argc);

  for (int i = 0; i < argc; i++) {
    printf("argv[%d] = %s\n", i, argv[i]);
  }

  for (i = 0; i < 1000000; i++) {
    a = a + 0.1;
  }

  printf("a = %lf\n", a);
  return 0;
}
