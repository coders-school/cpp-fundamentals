#pragma once

int fibonacci_iterative(int sequence) {
    
    unsigned result = 0;
    unsigned a = 0, b = 1;

    for (unsigned i = 0; i < sequence; i++) {
        b = b + a;
        a = b - a;

        result = a; 
    }
    return result;
}

int fibonacci_recursive(int sequence) {
    
    if (sequence == 0) {
        return 0;
    } else if (sequence < 3) {
        return 1;
    } else {
        return (fibonacci_recursive(sequence - 2) + fibonacci_recursive(sequence - 1));
    }
}
