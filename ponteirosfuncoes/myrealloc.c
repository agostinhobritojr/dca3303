#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* myrealloc(int* old, size_t old_size, size_t new_size) {
  int* new;

  if (old_size == new_size) {
    return old;
  }
  // aloca novo espaco para array de tamanho diferente
  new = (int*)malloc(new_size * sizeof(int));

  if (old_size < new_size) {
    memcpy(new, old, old_size * sizeof(int));
  } else {
    memcpy(new, old, new_size * sizeof(int));
  }
  free(old);
  return new;
}

int main(void) {
  int* x;
  int n;
  n = 10;
  x = (int*)malloc(n * sizeof(int));
  printf("x = %p\n", x);
  for (int i = 0; i < n; i++) {
    x[i] = i + 1;
  }
  for (int i = 0; i < n; i++) {
    printf("%2d ", x[i]);
  }
  printf("\n");

  n = 15;
  x = myrealloc(x, 10, n);
  printf("x = %p\n", x);
  for (int i = 0; i < n; i++) {
    printf("%2d ", x[i]);
  }
  printf("\n");

  free(x);
}