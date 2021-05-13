#include <iostream>
#include "fibonacci.hpp"

int main() {
    std::cout << fibonacci_iterative(45) << "\n";
    std::cout << fibonacci_recursive(45) << "\n";

    return 0;
}
