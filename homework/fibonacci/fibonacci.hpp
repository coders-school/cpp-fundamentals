#pragma once

int fibonacci_iterative(int sequence) {
    int a = 0;
    int b = 0;
    int c = 1;

    for(int i = sequence; i > 0; i--)
    {
        b = a;
        a = b + c;
        c = b;
    }

    return a;
}

int fibonacci_recursive(int sequence) {

    if(sequence < 2)
    {
        return 1;
    }
    else
        return fibonacci_recursive(sequence-1)+ fibonacci_recursive(sequence-2);
}
