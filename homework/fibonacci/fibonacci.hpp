#pragma once

int fibonacci_iterative(int sequence) {
    int a = 0;
    int b = 1;
    for (size_t i = 0; i < sequence; ++i) {
        b += a;
        a = b - a;
    }    
    return a;
}

int fibonacci_recursive(int sequence) {
    return 0;
}
