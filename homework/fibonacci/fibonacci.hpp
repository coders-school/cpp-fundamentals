#pragma once

int fibonacci_iterative(int sequence)
{
    // TODO: Your implementation goes here
    if (sequence <= 1)
    {
        return sequence;
    }

    int out = 0;
    int a = 0;
    int b = 1;
    while (sequence-- > 1)
    {
        out = a + b;
        a = b;
        b = out;
    }

    return out;
}

int fibonacci_recursive(int sequence)
{
    // TODO: Your implementation goes here
    if (sequence <= 1)
    {
        return sequence;
    }
    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}
