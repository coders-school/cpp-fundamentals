#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}

int fibonacci_recursive(int sequence) {
    if(sequence == 0 || sequence == 1)
    {
        //0 - 0; 1 - 1
        return sequence;
    }
    else if(sequence < 0)
    {
        return -1;
    }
    else
    {
        return fibonacci_recursive(sequence - 1)
        + fibonacci_recursive(sequence - 2);
    }
    return 0;
}
