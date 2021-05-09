#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here
    int result{0};
    if(sequence < 2) {
        result = sequence;
    } else {
        int prev{0};
        int next{1};
        for (size_t i = 1; i < sequence; i++) {
            result = prev + next;
            prev = next;
            next = result;
        }
    }
    return result;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    if(sequence < 2) {
        return sequence;
    } else {
        return fibonacci_recursive(sequence - 2) + fibonacci_recursive(sequence - 1);
    }
}
