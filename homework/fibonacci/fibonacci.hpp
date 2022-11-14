#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence == 0) {
        return 0;
    }
    if (sequence == 1) {
        return 1;
    }
    int result, prev1 = 0, prev2 = 1;
    for (std::size_t i = 2; i <= sequence; i++) {
        result = prev1 + prev2;
        prev1 = prev2;
        prev2 = result;
    }

    return result;
}

int fibonacci_recursive(int sequence) {
    if (sequence == 0) {
        return 0;
    } else if (sequence == 1) {
        return 1;
    } else {
        return fibonacci_recursive(sequence - 2) + fibonacci_recursive(sequence - 1);
    }
}
