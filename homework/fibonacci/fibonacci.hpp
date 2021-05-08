#pragma once

int fibonacci_iterative(int sequence) {
    int t1 = 0;
    int t2 = 1;
    int next;
    if(sequence == 0) { 
        return 0;
    }
    else if (sequence == 1 || sequence == 2){
        return 1;
    }
    else if(sequence >= 2){
        for(int i = 1; i < sequence; i++){
            next = t1 + t2;
            t1 = t2;
            t2 = next;
        }
        return next;
    }
    
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
