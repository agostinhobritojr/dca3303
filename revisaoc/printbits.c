#include <stdio.h>

void printBits(unsigned char c){
   unsigned char bit;
   for(bit = 128; bit ; bit >>= 1){
     if(c & bit){
        printf("1");
     }
     else{
        printf("0");
     }
   }
}

int main() {
  unsigned char a = 276;
  printBits(a);
  printf("\n");
  return 0;
}








