#pragma once

int fibonacci_iterative(int sequence) {
    int fib_top = 0;
    int num1 = 1;
    int num2 = 0;
    
    for (int i = 0 ; i < sequence; i++) {
        num2 = fib_top + num1;
        fib_top = num1;
        num1 = num2;
    }

    return fib_top;
}

int fibonacci_recursive(int sequence) {
    if (sequence <= 1)
        return sequence;
    return fibonacci_recursive(sequence-1) + fibonacci_recursive(sequence-2);
}
