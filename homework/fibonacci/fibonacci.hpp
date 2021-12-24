#pragma once

int fibonacci_iterative (int sequence)
{
    if (sequence == 0) {
        return 0;
    }

    int result { 1 };
    int previous { 0 };
    for (int num = 1; num < sequence; ++num) {
        result += previous;
        previous = result - previous;
    }

    return result;
}

int fibonacci_recursive (int sequence)
{
    if (sequence == 0) {
        return 0;
    }
    if (sequence < 3) {
        return 1;
    }

    return (fibonacci_recursive (sequence - 2) + fibonacci_recursive (sequence - 1));
}
