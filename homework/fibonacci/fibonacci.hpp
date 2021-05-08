#pragma once

int fibonacci_iterative(int sequence) {
    int a = 0, b = 1;
    if (sequence == 0){
        return 0;
    }
    for (int i = 0; i < sequence; ++i) {
        b += a;
        a = b -a;
    }
    return a;
    return 0;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
