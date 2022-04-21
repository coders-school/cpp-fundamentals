#include <iostream>
#include "fibonacci.hpp"

int main() {
    std::cout << fibonacci_iterative(3) << "\n";
    std::cout << fibonacci_recursive(10) << "\n";

    return 0;
}
