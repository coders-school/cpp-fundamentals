#include <iostream>
#include "generateSequence.hpp"

int main() {
    for (const int element : generateSequence(5, 3))
        std::cout << element << " | ";

    return 0;
}
