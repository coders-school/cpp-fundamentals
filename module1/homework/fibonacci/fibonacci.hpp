#pragma once

int fibonacci_recursive(int sequence);

int fibonacci_iterative(int sequence) {
    return fibonacci_recursive(sequence) ;
}

int fibonacci_recursive(int sequence) {
    if (sequence <= 0) {
        return 0;
    }
    if (sequence <= 2) {
        return 1;
    }
    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}
