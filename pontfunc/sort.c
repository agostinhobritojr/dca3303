/* qsort example */
#include <stdio.h>  /* printf */
#include <stdlib.h> /* qsort */

float values[] = {40, 10, 1.4, 1.1, 20, 25};

int compare(const void* a, const void* b) {
  //
  return (*(float*)a - *(float*)b);
}

int main() {
  int n;
  qsort(values, 6, sizeof(float), compare);
  for (n = 0; n < 6; n++) {
    printf("%2.1f ", values[n]);
  }
  printf("\n");
  return 0;
}
