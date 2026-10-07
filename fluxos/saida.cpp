#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

int main(void) {
  std::ofstream fout;
  int nvoxels = 0;
  std::string s, s1, s2;

  s = "saida.off";
  s = std::string("saida") + ".off";
  s1 = std::string("saida");
  s2 = std::string(".off");
  s = s1 + s2;
  //  std::cin >> s;
  //  std::getline(std::cin, s);
  std::cout << s << std::endl;

  fout.open(s.c_str());
  if (!fout.is_open()) {
    exit(1);
  }

  nvoxels = 10;

  fout << "OFF\n";
  fout << nvoxels * 8 << " " << nvoxels * 6 << " 0\n";

  fout.close();
}
