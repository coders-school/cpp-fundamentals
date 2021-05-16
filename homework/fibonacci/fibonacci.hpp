#pragma once

int fibonacci_iterative(int sequence) {
    
    if (sequence < 1) {
        return 0;
    }

    int i2 = 0;
    int i1 = 1;
    int result = 1;
    
    for (;sequence > 1; --sequence) {
        result = i2 + i1;
        i2 = i1;
        i1 = result;
    }
    return result;
}

int fibonacci_recursive(int sequence) {
    
    if (!sequence) {
        return 0;
    }
    return (sequence > 2) ? fibonacci_recursive(sequence - 2) + fibonacci_recursive(sequence - 1) : 1;
}
