#include <iostream>
#include "fibonacci.hpp"

int main() {
    std::cout << fibonacci_iterative(10) << "\n";
    std::cout << fibonacci_recursive(10) << "\n";

    return 0;
}
