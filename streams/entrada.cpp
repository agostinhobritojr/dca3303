#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

int main(void) {
  std::ifstream fin;
  std::ifstream fin2;
  int nl, nc;
  fin2.open("matriz.txt");
  fin2 >> nl >> nc;
  std::cout << "leu: " << nl << "\n";
  std::cout << "leu: " << nc << "\n";

  for (int i = 0; i < nl; i++) {
    for (int j = 0; j < nc; j++) {
      float x;
      fin2 >> x;
      std::cout << std::fixed << std::setprecision(2);
      std::cout << x << " ";
    }
    std::cout << "\n";
  }

  std::string s;
  int s1;
  fin.open("nome.txt");
  if (!fin.is_open()) {
    exit(1);
  }
  fin >> s >> s1;
  std::cout << "leu: " << s << "\n";
  std::cout << "leu: " << s1 << "\n";
  fin.close();
}