#include <iostream>

int fibonacci_iterative(int );
int fibonacci_recursive(int );

int main() {
    std::cout << fibonacci_iterative(10) << "\n";
    std::cout << fibonacci_recursive(10) << "\n";

    return 0;
}

#include "fibonacci.hpp"

