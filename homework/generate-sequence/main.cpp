#include <iostream>
#include "generateSequence.hpp"

int main() {
    for (const int element : generateSequence(10, 5))
        std::cout << element << " | ";
    return 0;
}
