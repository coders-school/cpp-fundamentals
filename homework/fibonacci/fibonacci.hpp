#pragma once

int fibonacci_iterative(int sequence) {
    int one = 1, two = 1, temp = 1;

    if(sequence == 0) {
        return 0;
    }
    
    for (int i = 0; i < sequence - 1; i++) {
        temp = one;
        one = two;
        two += temp;
    }

    return one;
}

int fibonacci_recursive(int sequence) {
    if(sequence == 0 || sequence == 1) {
        return sequence;
    }

    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}
