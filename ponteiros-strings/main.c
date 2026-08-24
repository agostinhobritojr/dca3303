#include <stdio.h>

int main(){
  int alo[10];
  char senha[9];
  char nom[] = "Agostinho";
  printf("end alo = %p\n", alo);
  printf("end nom = %p\n", nom);
  nom[5] = 'o'; //111;
  nom[9] = 's';
  printf("numero = %lu\n", -1);
  printf("nome = %s\n", nom);
  printf("letra = %d\n", *(nom+5));
  return 0;
}
