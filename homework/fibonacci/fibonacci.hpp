#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence == 0) return 0;
    if (sequence == 1) return 1;
    int antepenulminate = 0;
    int penultimate = 1;
    int result = 0;
    if (sequence > 2) {
        for (int i = 3; i <= sequence; i++) {
            result = antepenulminate + penultimate;
            antepenulminate = penultimate;
            penultimate = result;
        }
        return result;
    }
    return 0;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
