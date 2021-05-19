#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here

    if(sequence == 0)
        return 0;
    else if(sequence == 1)
        return 1;
    
    int previous = 0;
    int next = 1;
    for(int i = 0; i<sequence-1; i++)
    {
        int temp = next;
        next+=previous;
        previous=temp;
    }
    return next;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    
    if(sequence == 0)
        return 0;
    else if(sequence == 1)
        return 1;
    else 
        return fibonacci_recursive(sequence-1) + fibonacci_recursive(sequence-2);
    
}

