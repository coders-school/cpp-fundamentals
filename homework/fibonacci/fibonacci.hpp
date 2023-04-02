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
    // TODO: Your implementation goes here
    return 0;
}
