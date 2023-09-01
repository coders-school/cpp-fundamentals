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
    int sum = 0;
    
    return sum = fibonacci_recursive(sequence - 2) + fibonacci_recursive(sequence - 1);
}
