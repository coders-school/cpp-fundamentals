#pragma once

int fibonacci_iterative(int sequence) {
    int first = 0, second = 1;
    if (sequence <= 0) {
        return 0;
    } else if (sequence == 1) {
        return 1;
    } else {
        for (int i = 0; i < sequence; i++) {
            second += first;
            first = second - first;
        }
        return first;
    }
}

int fibonacci_recursive(int sequence) {
    if (sequence <= 0) {
        return 0;
    } else if (sequence == 1) {
        return 1;
    } else {
        return fibonacci_recursive(sequence - 2) + fibonacci_recursive(sequence - 1);
    }
}
