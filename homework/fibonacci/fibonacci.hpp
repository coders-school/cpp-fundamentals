#pragma once

int fibonacci_iterative(int sequence) {
    int first = 0;
    int second = 1;
    if(!sequence){
        return 0;
    }
    if(sequence == 1){
        return 1;
    }
    for(int i=1;i<sequence;i++){
        int result = first + second;
        first = second;
        second = result;
    }
    return second;
}

int fibonacci_recursive(int sequence) {
    if(!sequence){
        return 0;
    }
    if(sequence == 1){
        return 1;
    }
    return fibonacci_recursive(sequence-2) + fibonacci_recursive(sequence-1);
}
