#include <cstdlib>
#include <fstream>
int main(void) {
  std::ofstream fout;
  int nvoxels;
  fout.open("nome.txt");
  if (!fout.is_open()) {
    exit(1);
  }
  //  fout << "Agostinho Brito \n";
  fout << "OFF\n";
  nvoxels = 15;
  fout << 8 * nvoxels << " " << 6 * nvoxels << " 0\n";
  fout.close();
}
