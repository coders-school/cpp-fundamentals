#pragma once

int fibonacci_iterative(int sequence) {
    int i;
    int numbers[sequence];
    for (i=0; i<sequence; ++i)
           if (i==0 || i==1) numbers[i]=i;
           else numbers[i]=numbers[i-1]+numbers[i-2];
    numbers[i]=numbers[i-1]+numbers[i-2];
    return numbers[i];
}

int fibonacci_recursive(int sequence) {
    if (sequence==0 || sequence==1 )
            return sequence;
        else 
            return (fibonacci_recursive(sequence-1)+fibonacci_recursive(sequence-2));
}
