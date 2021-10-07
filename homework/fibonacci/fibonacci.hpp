#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here

    int fibFirst = 0;
    int fibSecond = 1;
    for (int i = 0; i < sequence; i++) {
        fibSecond += fibFirst;
        fibFirst = fibSecond - fibFirst;
    }
    return fibFirst;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here

    if (sequence == 0)
        return 0;
    if (sequence == 1)
        return 1;
    else
        return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}
