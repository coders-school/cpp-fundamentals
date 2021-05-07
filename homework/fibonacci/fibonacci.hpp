#pragma once

int fibonacci_iterative(int sequence) {
    if(0==sequence){
        return(0);
    }
    if(1==sequence){
        return(1);
    }
    int fib=1, fibs1=1, fibs2=0;
    for(int i=2; i<sequence; ++i){
        fibs2=fibs1;
        fibs1=fib;
        fib=fibs1+fibs2;
    }
    return fib;
}

int fibonacci_recursive(int sequence) {
    if(0==sequence){
        return(0);
    }
    if(1==sequence){
        return(1);
    }
    return fibonacci_recursive(sequence-2)+fibonacci_recursive(sequence-1);
}
