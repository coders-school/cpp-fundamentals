#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence <= 1)
        return sequence;
		
    int current = 0, next = 1, tmp = 0;
    for (int i = 0; i < sequence; i++)
    {
        tmp = current + next;
        current = next;
        next = tmp;
    }
    return current;
}

int fibonacci_recursive(int sequence) {
    if (sequence <= 1)
        return sequence;
    
    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}
