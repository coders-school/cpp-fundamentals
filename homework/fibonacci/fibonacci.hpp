#pragma once

/*int fibonacci_iterative(int sequence) {
    for (int i = 0; i < sequence; ++i) {
        if (i == 0) return 0;
        if (i == 1) return 1;
        else {
            return (i-2) + (i-1);
        }
    }
    return 0;
}*/

int fibonacci_recursive(int sequence) {
    if (sequence == 0) return 0;
    if (sequence == 1) return 1;
    return fibonacci_recursive(sequence-1) + fibonacci_recursive(sequence-2);
}

