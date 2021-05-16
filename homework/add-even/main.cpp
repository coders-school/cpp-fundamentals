#include <iostream>
#include <vector>

int addEven(const std::vector<int>& );

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::cout << addEven(vec) << "\n";

    return 0;
}

#include "addEven.hpp"

