#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence == 0)
        return 0;
    if (sequence == 1)
        return 1;
    int a = 0;
    int b = 1;
    for (int i = 2; i <= sequence; i++) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}


int fibonacci_recursive(int sequence) {
    if (sequence <= 1)
        return sequence;
    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}
