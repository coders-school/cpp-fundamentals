#include <iostream>
#include "fibonacci.hpp"

int main() {
    std::cout << fibonacci_iterative(5) << "\n";
    std::cout << fibonacci_recursive(5) << "\n";

    return 0;
}
