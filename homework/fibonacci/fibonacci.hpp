#pragma once

int fibonacci_iterative(int sequence) {
    
    if(sequence == 0) {
        return 0;
    } else if(sequence == 1) {
        return 1;
    }

    int n_1 = 1;
    int n_2 = 0;
    int f_n = 0;

    for(int i = 2; i <= sequence; i++) {
        f_n = n_1 + n_2;
        n_2 = n_1;
        n_1 = f_n;        
    }

    return f_n;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
