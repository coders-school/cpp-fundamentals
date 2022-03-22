#include <iostream>

constexpr size_t tab_size = 100;

int main() {
    int tab[tab_size];

    for (size_t i = 0; i < tab_size; ++i) {
        if(i == 0)
        {
          tab[i] = 1;
        }
        else
        {
          tab[i] = tab[i - 1] + 2;
        }
    }

    for (size_t i = 0; i < tab_size; ++i) {
        std::cout << tab[i] << "\n";
    }

    return 0;
}
