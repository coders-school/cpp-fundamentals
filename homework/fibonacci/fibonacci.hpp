#pragma once

int fibonacci_iterative(int sequence ) {
    
    if(sequence == 0) return -1; 

    // n = n-1 + n -2;
    int tab[sequence]={};

    tab[0] = 1;
    tab[1] = 1;
    int sum_fib = {};
    size_t i = 2;

    for(; i < sequence; ++i)
    {
        tab[i] = tab[i-1] + tab[i-2];
    }

    sum_fib = tab[i-1];

    return sum_fib;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    



    return 0;
}
