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

    if ( sequence == 0)
    {
        return 0;
    }

    if ( sequence < 3)
    {
        return 1;
    }

    return fibonacci_recursive(sequence - 2) + fibonacci_recursive(sequence - 1);
}
