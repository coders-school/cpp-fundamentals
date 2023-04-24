#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here
    int zeroth = 0;
    int first = 1;
    int current = 0;

    if (sequence == 0) {
        return zeroth;
    } else if (sequence == 1) {
        return first;
    } else {
        for (int i = 2; i <= sequence; i++) {
            current = first + zeroth;
            zeroth = first;
            first = current;
        }
    }

    return current;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    if (sequence == 0) {
        return 0;
    } else if (sequence == 1) {
        return 1;
    }

    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}
