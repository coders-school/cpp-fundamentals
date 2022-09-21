#include <iostream>

constexpr size_t tab_size = 100;

int main() {
    int tab[tab_size];
    int j = 1;

    for (size_t i = 0; i < tab_size; ++i, ++j) {
        tab[i] = j++;
    }

    for (size_t i = 0; i < tab_size; ++i) {
        std::cout << tab[i] << "\n";
    }

    return 0;
}
