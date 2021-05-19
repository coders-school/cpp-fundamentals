#pragma once
#include <iostream>
int fibonacci_iterative(int sequence) {
    int fib1 = 0;
    int fib2 = 1;

    if(!sequence)
    {
        return 0;
    }

    for(int i = 2; i <= sequence; i++)
    {
        auto temp = fib2;
        fib2 = fib1 + fib2;
        fib1 = temp;               
    }
    return fib2;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
