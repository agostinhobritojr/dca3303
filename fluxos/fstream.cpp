#include <cstdlib>
#include <fstream>

int main(void) {
  std::ofstream fout;

  fout.open("tapioca.txt");
  if (!fout.is_open()) {
    exit(1);
  }
  fout << "Agostinho Brito \n" << std::flush;
  fout << "saida" << std::endl;
  fout.close();
}