#pragma once

int fibonacci_iterative(int sequence) {
    int iArray[sequence];
    iArray[0]=0;
    iArray[1]=1;

    for (int i=2; i<sequence; i++)
    {
        iArray[i] = iArray[i-1] + iArray[i-2];
    }

    return iArray[sequence - 1];
}

int fibonacci_recursive(int sequence) {
    if (sequence <= 1)
        return sequence;
    return fibonacci_recursive(sequence-1) + fibonacci_recursive(sequence-2);
}

