#pragma once

int fibonacci_iterative(int sequence) {
    int a {0};
    int b {1};
    int fib;
    
    if (sequence == 0){
        return a;
    } 
    
    if (sequence == 1){
        return b;
    }
    
    for (int i = 1; i < sequence; i++){
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
