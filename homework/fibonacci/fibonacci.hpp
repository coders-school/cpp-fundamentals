#pragma once

int fibonacci_iterative(int sequence) {
    if(sequence == 0){
        return 0;
    }
    if(sequence == 1){
        return 1;
    }
    int total = 0, secondLast = 0, last = 1; 
    for(int i = 2; i <= sequence; i++){
        total = last + secondLast;
        secondLast = last;
        last = total;

    }
    return last;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
