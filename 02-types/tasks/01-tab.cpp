#include <iostream>

constexpr size_t tab_size = 100;

int main() {
  int tab[tab_size];

  for (size_t i = 0; i < tab_size / 2; ++i) {
    tab[i] = 2 * i + 1;
  }

  for (size_t i = 0; i < tab_size / 2; ++i) {
    std::cout << tab[i] << "\n";
  }

  return 0;
}
