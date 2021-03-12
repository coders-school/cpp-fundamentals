#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}

int fibonacci_recursive(int sequence) {
    if (sequence <= 2) {
        return 1;
    }
    return fibonacci(sequence - 1) + fibonacci(sequence - 2);
}
