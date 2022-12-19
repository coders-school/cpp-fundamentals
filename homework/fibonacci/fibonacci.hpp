#pragma once

int fibonacci_iterative(int sequence) {
    int result = 1;

    if (sequence == 0)
        result = 0;
    else if (sequence == 1)
        result = 1;

    else {
        auto previous = 1;

        for (auto i = 2; i < sequence; i++) {
            result += previous;
            previous = result - previous;
        }
    }

    return result;
}

int fibonacci_recursive(int sequence) {
    if (sequence == 0) {
        return 0;
    }

    else if (sequence < 3) {
        return 1;
    }

    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}
