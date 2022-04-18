#pragma once

int fibonacci_iterative(int sequence) {
    int result = 0;
    int a = 0;
    int b = 1;

    for (int i = sequence; i > 0; i--)
    {
        a = result;
        result = a + b;
        b = a;
    }
    return result;
}

int fibonacci_recursive(int sequence) {
    if (sequence == 0) return 0;
    if (sequence == 1 || sequence == 2)
    {
        return 1;
    }
    else
        return fibonacci_recursive(sequence-1)
        +fibonacci_recursive(sequence-2);
}