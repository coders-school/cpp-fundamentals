#pragma once

int fibonacci_iterative(int sequence) {
    
    if (sequence < 2) {
        return sequence;
    }

    int first = 1;
    int second = 1;

    while (sequence-- > 2) {
        second += first;
        first = second - first;
    }

    return second;
}

int fibonacci_recursive(int sequence) {
    
    if (sequence < 2) {
        return sequence;
    }

    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);


}
