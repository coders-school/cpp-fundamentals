#pragma once

int fibonacci_iterative(int sequence) {
    int a = 0, b = 1, t = 1;
    for (int i = 0; i < sequence; i++) {
        t = a;
        a = a + b;
        b = t;
    }
    return a;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    if (sequence <= 1) {
        return sequence;
    } else {
     return fibonacci_recursive(sequence - 2) + fibonacci_recursive(sequence - 1);
    }
}
