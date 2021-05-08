#pragma once

int fibonacci_iterative(int sequence) {
    
    if(sequence == 0)
    {
        return 0;
    }
    else if(sequence == 1)
    {
        return 1;
    }

    int i {0};
    int j {1};
    int result {0};
    for(int k {0}; k < sequence - 1; k++)
    {
        result = i + j;
        i = j;
        j = result;
    }
    return result;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
