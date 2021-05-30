#pragma once

int fibonacci_iterative(int sequence) {
    int a = 0;      //wyraz n-2
    int b = 1;      //wyraz n-1
    int sum = 0;
    if (sequence == 1 || sequence == 2) return 1;
    else {
        for (int i = 0; i < sequence - 1; ++i) {
        
            sum = a + b;
            b += a;
            a = b - a;
        }
        return sum;
    }
}

int fibonacci_recursive(int sequence) {
    if (sequence == 0) return 0;
    if (sequence == 1) return 1;
    return fibonacci_recursive(sequence-1) + fibonacci_recursive(sequence-2);
}

