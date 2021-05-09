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
    if (sequence < 1){
        return 0;
    } else if (sequence == 2 || sequence == 1) { 
        return 1;
    }
    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}
