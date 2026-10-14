#include <math.h>
#include <stdio.h>
#include <time.h>

#define N 500000000L

int main(void) {
  clock_t t;
  float x = 4.0f;
  float y;
  long int i;

  printf("sqrt()\n");

  y = 0.0f;
  t = clock();

  for (i = 0; i < N; i++) {
    //   x += 0.000001f;
    y += sqrt(x);
  }

  t = clock() - t;

  printf("y = %f\n", y);
  printf("Time: %f s\n", (double)t / CLOCKS_PER_SEC);

  printf("\nsqrtf()\n");

  x = 4.0f;
  y = 0.0f;
  t = clock();

  for (i = 0; i < N; i++) {
    //  x += 0.000001f;
    y += sqrtf(x);
  }

  t = clock() - t;

  printf("y = %f\n", y);
  printf("Time: %f s\n", (double)t / CLOCKS_PER_SEC);

  return 0;
}
