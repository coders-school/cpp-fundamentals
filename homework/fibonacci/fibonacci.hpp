#pragma once

int fibonacci_iterative(int sequence) {

    int a = 0;
    int b = 1;

    for( int fibonacci_sequence_counter = 0; fibonacci_sequence_counter < sequence; fibonacci_sequence_counter++ )
    {
        b += a;
        a = b - a;
    }

    return a;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
