/* qsort example */
#include <stdio.h>  /* printf */
#include <stdlib.h> /* qsort */

float values[] = {10.4, 10.1, 100, 90, 20, 25};

int compare(const void* a, const void* b) {
  //
  return (*(float*)a - *(float*)b);
}

int main() {
  int n;
  qsort(values, 6, sizeof(float), compare);
  for (n = 0; n < 6; n++) {
    printf("%lf ", values[n]);
  }
  return 0;
}
