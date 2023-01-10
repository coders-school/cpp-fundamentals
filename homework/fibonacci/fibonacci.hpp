#pragma once

int fibonacci_iterative(int sequence) {
    int a0 = 0;
    int a1 = 1;

    for(int i=0; i<sequence; i++) {
        a1 += a0;
        a0 = a1 - a0;
    }
    return a0;
}

int fibonacci_recursive(int sequence) {
    if (sequence == 0) {
        return 0;
    } else if (sequence < 3) {
        return 1;
    } else {
        return fibonacci_recursive(sequence-1)+fibonacci_recursive(sequence-2);
    }
}
