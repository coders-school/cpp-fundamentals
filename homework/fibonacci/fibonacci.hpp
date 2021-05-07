#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here
    unsigned int result;
    int a = 1, b = 1;

    if (sequence == 0) {
        result = 0;
    } else if (sequence == 1 || sequence == 2) {
        result = 1;
    } else {
        for (size_t i = 3; i <= sequence; i++) {
            result = a + b;
            a = b;
            b = result;
        }
    }
    return result;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    if (sequence == 0) {
        return 0;
    } else if (sequence == 1) {
        return 1;
    } else if (sequence > 1) {
        return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
    } else {
        return 0;
    }
}
