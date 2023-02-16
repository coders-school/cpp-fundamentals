#pragma once

int fibonacci_iterative(int sequence) {
    long result = 0;
    for (int i = 0; i <= sequence; i++) {
        result = result + i;
   } 
   return result;
}

int fibonacci_recursive(int sequence) {
    long result = 0;
    if (sequence < 3)
        return 1;
    return fibonacci_recursive(sequence - 2) + fibonacci_recursive(sequence - 1);
}
