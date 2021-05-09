#pragma once

int fibonacci_iterative(int sequence)
{
    int top{0};
    int previus{0};
    int current{1};

    for (int i{0}; i < sequence; i++)
    {
        previus = current;
        current = top;
        top = previus + current;
    }

    return top;
}

int fibonacci_recursive(int sequence)
{
    if (sequence == 0)
    {
        return 0;
    }
    if (sequence == 1)
    {
        return 1;
    }
    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
    return 0;
}
