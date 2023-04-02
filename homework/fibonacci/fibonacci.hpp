#pragma once

int fibonacci_iterative(int sequence) {
    int fib[sequence];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= sequence; i++) {
        fib[i] = fib[i -1] + fib[i -2];
    }
    return fib[sequence];
}

int fibonacci_recursive(int sequence) {
    if (sequence <= 1) {
        return sequence;
    }
    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
    return 0;
}
