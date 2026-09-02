#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* myrealloc(int* old, int oldsize, int newsize) {
  int* new;
  if (oldsize == newsize) {
    return old;
  }
  new = (int*)malloc(newsize * sizeof(int));
  if (oldsize < newsize) {
    memcpy(new, old, oldsize * sizeof(int));
  } else {
    memcpy(new, old, newsize * sizeof(int));
  }
  free(old);
  return new;
}

int main() {
  int *x, n = 10, oldn;
  x = (int*)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++) {
    x[i] = i;
  }
  for (int i = 0; i < n; i++) {
    printf("%d, ", x[i]);
  }
  printf("\n");
  n = 5;
  printf("x = %p\n", x);
  x = realloc(x, n);
  oldn = n;
  n = 15;
  x = myrealloc(x, oldn, n);
  printf("x = %p\n", x);
  for (int i = 0; i < n; i++) {
    printf("%d, ", x[i]);
  }
  printf("\n");
  free(x);
  return 0;
}
