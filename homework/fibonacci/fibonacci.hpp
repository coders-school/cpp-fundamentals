#pragma once

int fibonacci_iterative(int sequence) {
    int i, x, y, number;
    x = 0;
    y = 1;
    for (i = 1; i < sequence; ++i)
        if (sequence == 0 )
            return x;
        else if (sequence == 1 )
            return y;
        else {
            number = x + y;
            x = y;
            y = number;}
    return number;
}

int fibonacci_recursive(int sequence) {
    if (sequence == 0 || sequence == 1 )
            return sequence;
        else 
            return (fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2));
}
