#include <iostream>
#include <vector>
#include "addEven.hpp"

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::cout << addEven(vec) << "\n";
    std::vector<int> vec2{1, 2};
    std::cout << addEven(vec2) << "\n";

    return 0;
}
