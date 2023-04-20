#pragma once
#include <iostream>
#include <string>

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here
    int x {0};
    int y {1};
    int z {0};

    if (sequence == 0){
        return z;
    } else if (sequence == 1) {
        return y;
    }

    for (size_t i = 1; i < sequence; i++){
        z = x + y;
        x = y;
        y = z;
    }
    return z;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    int z {};
    if (sequence <= 1){
        return sequence;
    }
    z = fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);

    return z;
}
