#include <iostream>

constexpr size_t tab_size = 100;

int main() {
    int tab[tab_size];

    for (size_t i = 0; i < tab_size; ++i) {
        tab[i] = 2 * i + 1;
    }

    for (size_t i = 0; i < tab_size; i += 4) {
        std::cout << tab[i] << "\n";
    }

    return 0;
}
