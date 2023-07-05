#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here
    int fib[sequence];
    if (sequence == 0) {
        fib[sequence] = 0;
        return fib[sequence];
    } else if (sequence == 2 || sequence == 1) {
        fib[sequence] = 1;
        return fib[sequence];
    } else {
        for(int i = 2; i < sequence; i++) {
            fib[0] = 1;
            fib[1] = 1;
            fib[i] = fib[i - 2] + fib[i - 1];
        }
        return fib[sequence - 1];
    }
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
