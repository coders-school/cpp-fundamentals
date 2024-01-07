#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here

    if (sequence == 0) {
        return 0;
    }

    if (sequence == 1) {
        return 1;
    }

    int result = 0;
    int a = 0;
    int b = 1;

    for (size_t i = 2; i <= sequence; ++i) {
        result = a + b;
        std::swap(a, b);
        b += a;
    }

    return result;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
