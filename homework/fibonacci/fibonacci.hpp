#pragma once
#include <vector>

int fibonacci_iterative(int sequence) 
{
    std::vector<int>fibonacciVec {0 , 1};
    fibonacciVec.reserve(sequence);

    for(int i = 2; i <= sequence; i++)
    {
       //Add the previous 2 numbers
       fibonacciVec.push_back(fibonacciVec[i - 1] + fibonacciVec[i - 2]);
    }

    return fibonacciVec[sequence];
}

int fibonacci_recursive(int n) 
{
    if(n <= 1)
        return n;
    return fibonacci_iterative(n-1) + fibonacci_iterative(n-2);
}