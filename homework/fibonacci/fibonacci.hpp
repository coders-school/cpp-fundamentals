#pragma once

int fibonacci_iterative(int sequence) {
    int n1 = 0;
    int n2 = 1;
    if (sequence == 0) {
        return n1;
    } else if (sequence == 1) {
        return n2;
    } else {
        for (unsigned int i = 1; i < sequence; ++i) {
            int tmp = n1 + n2;
            n1 = n2;
            n2 = tmp;
        }
        return n2;
    }
}

int fibonacci_recursive(int sequence) {
    if (sequence < 2) {
        return sequence;
    } else {
        return (fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2));
    }
}
