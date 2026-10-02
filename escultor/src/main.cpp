#include <iostream>

int main() {
  Sculptor s(10, 10, 10);

  s.setColor(1.0, 0.0, 0.0, 1.0);
  s.putVoxel(5, 5, 5);
  s.writeOFF("output.off");
  return 0;
}
