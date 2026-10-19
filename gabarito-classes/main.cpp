#include <iostream>
#include "alo.h"

int main (){
  Alo<int, float, 3> aloint(3);
  Alo<float, float, 6> alofloat(3.4);
  aloint.print();
  alofloat.print();
  return 0;
}





