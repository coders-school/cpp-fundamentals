#pragma once

int fibonacci_iterative(int sequence) {
    int fib1 = 0;
    int fib2 = 1;
    int fib3;
    if(sequence == 0){
        return 0;
    } else if(sequence == 1) {
        return 1;
    } else {
        while (sequence != 1) {
            fib3 = fib2;
            fib2 = fib1 + fib3;
            fib1 = fib3;
            sequence--;
        }
        return fib2;
    }
}

int fibonacci_recursive(int sequence) {
    if(sequence == 0) {
        return 0;
    }
    if(sequence == 1) {
        return 1;
    }
    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}
