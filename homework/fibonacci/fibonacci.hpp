#pragma once

int fibonacci_iterative(int sequence) {
    int fibo = 0;
    int n1 = 0;
    int n2 = 1;
    if (sequence == 0 || sequence == 1) {
        return sequence;
    }
    for (int i = 2; i <= sequence; ++i) {
        fibo = n1 + n2;
        n1 = n2;
        n2 = fibo;
    }
    return fibo;
}

int fibonacci_recursive(int sequence) {
    if (sequence == 0 || sequence == 1) {
        return sequence;
    }
    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}
