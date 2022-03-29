#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence == 0) {
        return 0;
    }

    if (sequence == 1) {
        return 1;
    }

    int previousNumber = 0;
    int currentNumber = 1;

    for (int i = 2; i <= sequence; ++i) {
        int sum = previousNumber + currentNumber;
        previousNumber = currentNumber;
        currentNumber = sum;
    }

    return currentNumber;
}

int fibonacci_recursive(int sequence) {
    if (sequence == 0) {
        return 0;
    }

    if (sequence == 1) {
        return 1;
    }

    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}
