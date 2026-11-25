#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence <= 1) {
        return sequence;
    }
    int a = 0, b = 1, c;
    for (int i = 2; i <= sequence; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int fibonacci_recursive(int sequence) {
    if (sequence <= 1) {
        return sequence;
    }
    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}

