#include <cstdlib>
#include <fstream>
#include <iomanip>

int main(void) {
  std::ofstream fout;
  int nvertices, nfaces;
  int nvoxels;
  float x;

  nvoxels = 70;
  nvertices = nvoxels * 8;
  nfaces = nvoxels * 6;
  x = 1;

  fout.open("saida.off");
  if (!fout.is_open()) {
    exit(1);
  }
  fout << std::fixed;
  fout << std::setprecision(2);

  fout << "OFF\n";
  fout << nvertices << " " << nfaces << " 0\n";

  fout << x << std::endl;
  fout.close();
}