#include <stdio.h>   // para printf()
#include <stdlib.h>  // para malloc()
#include <time.h>    // para time()
int main(void) {
  int n, *x, *y;
  n = 10;
  // (int*) <= (void*)
  // x = (int*)malloc(n * sizeof(int));
  x = malloc(n * sizeof(int));
  printf("&x = %p\n", &x);
  printf(" x = %p\n", x);
  srand(time(0));
  for (int i = 0; i < n; i++) {
    x[i] = rand() % 100;
  }
  y = x + 1;
  printf(" y = %p\n", y);
  for (int i = 0; i < n; i++) {
    printf("%d, ", x[i]);
  }
  printf("\n");
  y[-1] = 8;

  //  printf("passou aqui\n");
  for (int i = 0; i < n; i++) {
    printf("%d, ", x[i]);
  }
  printf("\n");
  free(x);
}