#pragma once

int fibonacci_iterative(int sequence) {
    int first = 1, second = 1, third;
    
    if(sequence == 0) {
        return 0;
    }
    else if(sequence == 2 or sequence == 1) {
        return first;
    }

    for(int i = 2; i < sequence; i++) {
        third = first + second;
        first = second;
        second = third;
    }
    return third;
}

int fibonacci_recursive(int sequence) {
    if(sequence == 0) {
        return 0;
    }
    else if(sequence == 1 or sequence == 2) {
        return 1;
    }
    else {
        return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
    }
}
