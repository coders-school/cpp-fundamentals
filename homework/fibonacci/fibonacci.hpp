#pragma once

int fibonacci_iterative(int sequence) {
    if(sequence == 0 || sequence == 1)
    {
        return sequence;
    }
    
    int first{0};
    int second{1};
    for(int i{1}; i < sequence; ++i)
    {
        first += second;
        if(++i == sequence)
        {
            return first;
        }
        second += first;
    }
    return second;
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
