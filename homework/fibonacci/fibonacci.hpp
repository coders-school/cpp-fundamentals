#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence <= 1) {
        return sequence;
    }
    int last{ 1 };
    int nextToLast{ 1 };
    int result{ 1 };
    for (int i = 2; i < sequence; ++i) {
        result = last + nextToLast;
        nextToLast = last;
        last = result;
    }

    return result;
}

int fibonacci_recursive(int sequence) {
    if (sequence <= 1) {
        return sequence;
    }
    
    return fibonacci_recursive(sequence - 1) +
           fibonacci_recursive(sequence - 2);
}
