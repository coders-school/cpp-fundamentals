#pragma once

int fibonacci_iterative(int sequence) {
    int result = 0;
    int first = 0;
    int second = 0;

    for (int i = 0; i <= sequence; ++i) {
        if (i == 0) {
            result = 0;
        } else if (i == 1) {
            result = 1;
        } else {
            first = second;
            second = result;
            result = first + second;
        }
    }
    return result;
}

int fibonacci_recursive(int sequence) {
    if (sequence == 0) {
        return 0;
    }
    if (sequence < 3) {
        return 1;
    }
    return fibonacci_recursive(sequence - 2) + fibonacci_recursive(sequence - 1);
}
