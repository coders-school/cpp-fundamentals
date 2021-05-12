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
    // TODO: Your implementation goes here
    return 0;
}
