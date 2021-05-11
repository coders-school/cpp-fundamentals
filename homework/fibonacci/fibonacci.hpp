#pragma once

int fibonacci_iterative(int sequence) 
{
    if (sequence == 0) return 0;
    if (sequence == 1) return 1;

    auto result = 0;
    int w1 = 1;
    int w2 = 0;

    for (int i = 1; i < sequence; i++)
    {
        result = w1 + w2;
        w2 = w1;
        w1 = result;
    }

    return result;
}

int fibonacci_recursive(int sequence) 
{
    if (sequence == 0)
        return 0;
    
    if (sequence == 1)
        return 1;

    return (fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2));
}
