#include <cstdlib>
#include <fstream>
int main(void) {
  std::ofstream fout;
  int nvoxels = 4;
  int nvertices, nfaces;

  fout.open("nome.off");
  if (!fout.is_open()) {
    exit(1);
  }
  fout << "OFF\n";
  fout << nvoxels * 8 << " " << nvoxels * 6 << " 0\n";

    fout.close();
}
