#include <iostream>
#include "sculptor.h"

int main(){
    Sculptor s(10,10,10);
    s.setColor(1,0,0,1);
    s.putVoxel(3,5,8);
    s.writeOFF("alo.off");
    return 0;
}
