#pragma once

int fibonacci_iterative(int sequence) {
    int one_before = 1;
    int current = 0;
    int buffer;
    for (int i = 0; i < sequence; i++) {
        buffer = current;
        current += one_before;
        one_before = buffer;
    }
    return current;
}

int fibonacci_recursive(int sequence) {
    if (sequence == 1)
        return 1;
    else if (sequence > 1)
        return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
    else
        return 0;
}
