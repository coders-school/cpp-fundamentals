#pragma once

int fibonacci_iterative(int sequence) {
    int t1 = 0;
    int t2 = 1;
    int next_term;
    if(sequence == 0) { 
        return 0;
    }
    else if (sequence == 1 || sequence == 2){
        return 1;
    }
    else if(sequence >= 2){
        for(int i = 1; i < sequence; i++){
            next_term = t1 + t2;
            t1 = t2;
            t2 = next_term;
        }
        return next_term;
    }
}

int fibonacci_recursive(int sequence) {
    if(sequence < 2){
        return sequence;
    }
    else{
        return fibonacci_recursive(sequence-1) + fibonacci_recursive(sequence-2);
    }
}
