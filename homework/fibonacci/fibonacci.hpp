#pragma once


int fibonacci_iterative(int sequence) {
    int i = 0;
    int result = 0;
    int new_result = 0;
    int old_result = 0;
    while (i <= sequence) {
        if (i == 0) {
            result = 0;
            i++;
        } else if (i == 1) {
            old_result = result;
            result = 1;
            i++;
        } else {
            new_result = result + old_result;
            old_result = result;
            result = new_result;
            i++;
        }
    }
    return result;
}


int fibonacci_recursive(int sequence) {
    int result = 0;
    if (sequence == 0) {
        result = 0;
    } else if (sequence == 1) {
        result = 1;
    } else {
        result = fibonacci_recursive(sequence-1) + fibonacci_recursive(sequence-2);
    }
    return result;
}
