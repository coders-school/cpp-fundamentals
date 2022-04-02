#pragma once

int fibonacci_iterative(int sequence) {
    int a {0};
    int b {1};
    int temp {1};
    for(int i=0; i<sequence; ++i) {
        temp = a;
        a = a+b;
        b = temp;
    }
    return a;
}

int fibonacci_recursive(int sequence) {
    if(sequence<=1)
        return sequence;
    else
        return fibonacci_recursive(sequence-1)+ fibonacci_recursive(sequence-2);
}
