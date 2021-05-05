#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence == 0) {
        return 0;
    }
    if (sequence <= 2) {
        return 1;
    }
    return fibonacci_iterative(sequence - 1) + fibonacci_iterative(sequence - 2);
}

int fibonacci_recursive(int sequence) {
    return fibonacci_iterative(sequence);
}
