#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence <= 0) {
        return 0;
    }

    if (sequence <= 2) {
        return 1;
    }

    int fib{};
    for (int count = 2, fib_1 = 1, fib_2 = 1, t = 0;
         count <= sequence;
         t = fib_2, fib_2 += fib_1, fib_1 = t, ++count) {
        fib = fib_2;
    }
    return fib;
}

int fibonacci_recursive(int sequence) {
    if (sequence <= 0) {
        return 0;
    }

    if (sequence <= 2) {
        return 1;
    }
    return fibonacci_recursive(sequence - 2) + fibonacci_recursive(sequence - 1);
}
