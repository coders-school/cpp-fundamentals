#pragma once

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    if (sequence <= 2)
        return 1;
    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here
    return fibonacci_recursive(sequence);
}
