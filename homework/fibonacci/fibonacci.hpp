#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence == 0 || sequence == 1) {
        return sequence;
    }
    int a = 0, b = 1, c = 1;
    for (int i = 2 ; i < sequence; i++) {
        a = b;
        b = c;
        c = (a + b); 
    }
    return c;
}

int fibonacci_recursive(int sequence) {
    if (sequence == 0) {
        return 0;
    }
    else if (sequence == 1 || sequence == 2) {
        return 1;
    } else {
        return fibonacci_recursive (sequence-2) + fibonacci_recursive (sequence-1);
    }
}