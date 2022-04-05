#pragma once

int fibonacci_iterative(int sequence) {
    int iArray[sequence];
    for(int i = 0; i < sequence; i++){
        if(i == 0)
            iArray[i] = 0;
        else if(i == 1)
            iArray[i] = 1;
        else
        {
            iArray[i] = iArray[i - 1] + iArray[i - 2];
        }
    }

    return iArray[sequence];
}

int fibonacci_recursive(int sequence) {
    if (sequence <= 1)
        return sequence;
    return fibonacci_recursive(sequence-1) + fibonacci_recursive(sequence-2);
}
