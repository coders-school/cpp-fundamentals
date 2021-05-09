#pragma once
#include <vector>

int fibonacci_iterative(int sequence) {
    int fibOne = 0, fibTwo = 1;
    for (int i = 0; i < sequence; i++){
        fibOne += fibTwo;
        fibTwo = fibOne - fibTwo;
    }
    return fibOne;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    
    return fibonacci_iterative(sequence);
}
