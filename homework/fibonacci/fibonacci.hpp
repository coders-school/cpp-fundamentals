#pragma once

int fibonacci_iterative(int sequence){
    int fib_1 = 0, fib_2 = 1, tmp = 0;
    if (sequence < 1){
        return 0;
    }
    for (int i = 0; i<sequence-1 ; i++){
        tmp = fib_1 + fib_2;
        fib_1 = fib_2;
        fib_2 = tmp;
    }
    return fib_2;
}

int fibonacci_recursive(int sequence){
    if (sequence <= 0)
        return 0;
    else if (sequence == 1)
        return 1;
    return fibonacci_recursive(sequence - 1 ) + fibonacci_recursive(sequence - 2);
}