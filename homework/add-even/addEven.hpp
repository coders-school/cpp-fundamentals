#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) 
{
    int sum = 0;
    for(auto number : numbers)
    {
        if(number % 2 == 0)
        {
            sum += number;
        }
    }
    return sum;
}
