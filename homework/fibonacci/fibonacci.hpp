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
    return 0;
}
