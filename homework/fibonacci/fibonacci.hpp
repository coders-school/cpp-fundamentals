#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence == 0) {
        return 0;
    }
    int a = 0;
    int b = 1;
    for (int i = 1; i < sequence; i++) {
        int temp = b;
        b = a + b;
        a = temp;
    }
    return b;
}

int fibonacci_recursive(int sequence) {
    if (sequence <= 1) {
        return sequence;
    }
    else {
        return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
    }
}
