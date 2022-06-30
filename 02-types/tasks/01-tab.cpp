#include <iostream>

constexpr size_t tab_size = 100;
/* test3 */

int main() {
    int tab[tab_size];

    for (size_t i = 1; i < tab_size; i+2) {
        tab[i] = i;
    }

    for (size_t i = 0; i < tab_size; ++i) {
        std::cout << tab[i] << "\n";
    }

    return 0;
}
