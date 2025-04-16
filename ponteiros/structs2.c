#include <stdio.h>

struct cliente {
  int teste;
  int letra1;
  int letra3;
  char letra;
  char letra2;
};

int main(void) {
  //
  printf("tam = %ld\n", sizeof(struct cliente));
}