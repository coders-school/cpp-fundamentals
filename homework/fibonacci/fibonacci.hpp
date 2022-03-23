#pragma once
#include<vector>

int fibonacci_iterative(int sequence) 
{
    if (sequence <= 0)
    {
        return 0;
    }
    else if (sequence == 1)
    {
        return 1;
    }
    else
    {
        int sum = 0;
        std::vector<int> fib;
        fib.push_back(0);
        fib.push_back(1);
        for (size_t i = 1; i < sequence; i++)
        {
            fib.push_back(fib[i - 1] + fib[i]);
        }
        return fib.back();
    }
}

int fibonacci_recursive(int sequence) 
{
    if (sequence <= 0)
    {
        return 0;
    }
    else if (sequence == 1)
    {
        return 1;
    }
    else if (sequence == 2)
    {
        return 1;
    }
    else  
    {
        return fibonacci_recursive(sequence - 2) + fibonacci_recursive(sequence - 1);
    }
}
