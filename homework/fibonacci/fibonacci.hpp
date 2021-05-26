#pragma once

int fibonacci_iterative(int sequence) {
    int number = 1;
    int number_prev = 0;
    int temp = 0;
    
    if (sequence < 2) {
        return sequence;
    } 
    else {
        for (int i=2; i<=sequence; i++) {
            temp = number + number_prev;
            number_prev = number;
            number = temp;
        }
    }
    return number;
}

int fibonacci_recursive(int sequence) {
    if (sequence < 2) {
        return sequence;
    } 
    return fibonacci_recursive(sequence - 2) + fibonacci_recursive(sequence - 1);
}
