#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence <= 0) {
        return 0;
    }
    unsigned int fibo = 1;
    unsigned int fibo_prev = 1;
    unsigned int fibo_prev2 = 0;
    for (int i = 1; i < sequence; i++) {
        fibo += fibo_prev2;
        fibo_prev2 = fibo_prev;
        fibo_prev = fibo;
    }
    return fibo;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
