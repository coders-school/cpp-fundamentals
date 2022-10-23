#pragma once

int fibonacci_iterative(int sequence) {
    int back = 0;
    int next = 1;
    if (sequence == 0) {
        return back;
    } else if (sequence == 1) {
        return next;
    } else {
        for (int i = 2; i <= sequence; i++) {
            int temp = next;
            next = next + back;
            back = temp;
        }
    }
    return next;
}


int fibonacci_recursive(int sequence) {
    if (sequence == 0) {
        return 0;
    } else if (sequence == 1) {
        return 1;
    } else {
        return fibonacci_recursive(sequence - 2) + fibonacci_recursive(sequence - 1);
    }
    return 0;
}
