#pragma once
#include <array>

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here
    if (sequence == 0) {
        return 0;
    }
    std::array<int, 3> fib = {0, 1, 1};

    for (std::size_t i = 2; i < sequence; ++i) {
        fib[0] = fib[1];
        fib[1] = fib[2];
        fib[2] = fib[0] + fib[1];
    }

    return fib[2];
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    int fib = 0;

    if (sequence == 1) {
        fib = 1;
    } else if (sequence > 1) {
        fib = fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
    }

    return fib;
}
