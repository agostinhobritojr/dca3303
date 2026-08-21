#include <stdio.h>

void showbits(unsigned char c){
  unsigned char bit;
  for(bit=128; bit!=0; bit >>= 1){
    if(bit & c){
      printf("1");
    }
    else{
      printf("0");
    }
  }

  return;
}

int main(){
  unsigned char *c;
  float x = 0.125;
  c = &x;
  printf("c = %d\n", *c);
  printf("|");
  showbits(*(c+3)); printf("|");
  showbits(*(c+2)); printf("|");
  showbits(*(c+1)); printf("|");
  showbits(*(c+0)); printf("|");
  printf("\n");

  printf("|");
  showbits(c[3]); printf("|");
  showbits(c[2]); printf("|");
  showbits(c[1]); printf("|");
  showbits(c[0]); printf("|");
  printf("\n");
  return 0;
}
