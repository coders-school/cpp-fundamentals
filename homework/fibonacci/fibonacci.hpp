#pragma once

int fibonacci_iterative(int sequence) {
    int prevprev, prev = 0, curr = 1;
    for (int i = 0; i < sequence - 1; i++) {
        prevprev = prev;
        prev = curr;
        curr = prevprev + prev;
    }
    return curr;
}

int fibonacci_recursive(int sequence) {
    if (sequence == 0 || sequence == 1) {
        return sequence;
    }
    else
    //fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence + 2)
    return (fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2));
}
