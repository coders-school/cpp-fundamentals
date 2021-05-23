#pragma once

int fibonacci_iterative(int sequence ) {
    
    int last_fib = {};
    int tab[sequence] = {}; 
    int i = 2;
    
    if(sequence == 0) {
        return 0;
    }
    else if( sequence == 1 || sequence == 2 ) {
        return 1;
    }
    else
    {
        tab[0] = 1;
        tab[1] = 1;
        for (; i < sequence; i++)
        {
            tab[i] = tab[i-1] + tab[i-2];
        }
        last_fib = tab[i-1];
        return last_fib;
    }
}

int fibonacci_recursive(int sequence) {
 
    if(sequence == 0) return 0;
    if( sequence == 1 || sequence == 2 ) return 1;
    else {
        return fibonacci_recursive(sequence-1) + fibonacci_recursive(sequence-2) ;
    }
}
