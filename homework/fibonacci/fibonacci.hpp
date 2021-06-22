#pragma once

int fibonacci_iterative(int sequence) {
    int beforePrevNumber{0},
        prevNumber{1},
        sum{};

    if( sequence == 0)
        return beforePrevNumber;

    for(size_t it{2}; it <= sequence; ++it)
    {
        sum = beforePrevNumber + prevNumber;
        beforePrevNumber = prevNumber;
        prevNumber = sum;
    }
    return prevNumber;
}

int fibonacci_recursive(int sequence) {
    if (sequence <= 1)
        return sequence;

    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}