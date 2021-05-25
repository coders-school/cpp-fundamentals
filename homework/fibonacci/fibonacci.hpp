#pragma once

int fibonacci_iterative(int sequence)
{

    if (sequence == 0)
    {
        return 0;
    }
    else if (sequence == 1)
    {
        return 1;
    }
    else
    {
        int x = 0, y = 1, z, i;
        for (i = 1; i < sequence; i++)
        {
            z = y + x; //1 2 3 5 8
            x = y;//1 1 2 3 5
            y = z;//1 2 3 5 8
        }
        return z;
    }
}

int fibonacci_recursive(int sequence)
{
    if (sequence == 0)
    {
        return 0;
    }
    else if (sequence == 1)
    {
        return 1;
    }
    else
    {
        int x = 1, y = 0, z, i;

        for (i = 1; i < sequence; i++)
        {
            z = fibonacci_recursive(i) + fibonacci_recursive(i-1);
        }
        return z;
    }
}
