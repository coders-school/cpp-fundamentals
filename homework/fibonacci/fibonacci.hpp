#pragma once

int fibonacci_iterative(int sequence) {

    int result {0};
    int previous {0};
    int actual {1};

    if (sequence == 0) {
        return 0;
    } else if (sequence == 1) {
        return 1;
    } else {
        for (size_t i = 1; i < sequence; ++i) {
            result = previous + actual;
            previous = actual;
            actual = result;
        } 
        return result;
    }
}

int fibonacci_recursive(int sequence) {
   
    if (sequence == 0) {
        return 0;
    } else if (sequence == 1) {
        return 1;
    } else {
        return  fibonacci_recursive(sequence - 2) + fibonacci_recursive(sequence - 1);
    }
}