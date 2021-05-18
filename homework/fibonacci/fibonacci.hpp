#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    if(sequence == 0)
        return 0;
    if(sequence == 1 || sequence == 2)
        return 1;
    else
        return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence-2);
}
