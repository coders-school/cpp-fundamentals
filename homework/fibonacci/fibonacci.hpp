#pragma once

int fibonacci_iterative(int sequence) {
    int f;
    int f_prev = 0;
    int f_curr = 1;

    if (sequence == 0) {
        return 0;
    }

    if (sequence == 1) {
        return 1;
    }

    for (int i = 1; i < sequence; i++) {
        f = f_prev + f_curr;
        f_prev = f_curr;
        f_curr = f;
    }
    return f;
}

int fibonacci_recursive(int sequence) {
    if (sequence == 0) {
        return 0;
    }

    if (sequence == 1) {
        return 1;
    }

    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}
