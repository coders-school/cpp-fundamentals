#pragma once

int fibonacci_iterative(int sequence) {
    if(sequence <= 1)
        return sequence;
    int n2 = 0, n1 = 1, n;
    for (int i = 2; i <= sequence; i++){
            n = n2 + n1;
            n2 = n1;
            n1 = n;
    }
    return n;

}

int fibonacci_recursive(int sequence) {
    if(sequence <= 1)
        return sequence;
    return fibonacci_recursive(sequence - 2) + fibonacci_recursive(sequence - 1);    
}
