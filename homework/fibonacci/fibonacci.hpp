#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence == 0 || sequence == 1){
        return sequence;
    }
    int first = 0;
    int second = 1;
    int third = 0;

    for (int i = 1; i < sequence; i++){
        third = first + second;
        first = second;
        second = third;
    }
    return third;
}

int fibonacci_recursive(int sequence) {
    if (sequence == 0 || sequence == 1){
        return sequence;
    }
    unsigned long long result = fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
    return result;
}
