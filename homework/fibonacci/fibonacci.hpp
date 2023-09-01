#pragma once

int fibonacci_iterative(int sequence) {
    int a = 0;
    int b = 1;

    for (int i = 0; i < sequence; ++i)
    {
        b += a;
        a = b - a;
    }
    return b;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
