#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here

    if(sequence == 0)
        return 0;

    int x = {1};
    int y = {1};
    for(int i = 2; i < sequence; ++i){
        if(y > x){
            x += y;
        }
        else{
            y += x;
        }
    }

    return x > y ? x : y;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    if(sequence == 0)
        return 0;
    if(sequence == 1 || sequence == 2)
        return 1;
    else
        return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence-2);
}
