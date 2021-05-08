#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here
    int result;

    if (sequence == 0){
        result = 0;
    }
    else if (sequence == 1){
        result = 1;
    }
    else{
        int n_1 = 0;
        int n_2 = 1;

        for(int i = 1; i < sequence; i++){
            result = n_2 + n_1;
            n_1 = n_2;
            n_2 = result;
        }
    }
    return result;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    int result = 0;
    
    if (sequence == 0){
        result = 0;
    }
    else if (sequence == 1){
        result = 1;
    }
    else{
        result = fibonacci_recursive(sequence-1) + fibonacci_recursive(sequence-2); 
    }

    return result;
}

