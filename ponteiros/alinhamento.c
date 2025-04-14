#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100000000  // 100 milhões de elementos

struct alinhada {
  char a;
  int b;
};

#pragma pack(1)
struct nao_alinhada {
  char a;
  int b;
};

int main() {
  clock_t start, end;
  long long soma = 0;

  // Alinhada
  struct alinhada *v1 = malloc(sizeof(struct alinhada) * N);
  for (int i = 0; i < N; i++) {
    v1[i].a = 1;
    v1[i].b = i;
  }

  start = clock();
  for (int i = 0; i < N; i++) {
    soma += v1[i].b;
  }
  end = clock();
  printf("Alinhada: Tempo = %.3f segundos\n",
         (double)(end - start) / CLOCKS_PER_SEC);
  free(v1);

  // Não Alinhada
  struct nao_alinhada *v2 = malloc(sizeof(struct nao_alinhada) * N);
  for (int i = 0; i < N; i++) {
    v2[i].a = 1;
    v2[i].b = i;
  }

  soma = 0;
  start = clock();
  for (int i = 0; i < N; i++) {
    soma += v2[i].b;
  }
  end = clock();
  printf("Não Alinhada: Tempo = %.3f segundos\n",
         (double)(end - start) / CLOCKS_PER_SEC);
  free(v2);

  return 0;
}
