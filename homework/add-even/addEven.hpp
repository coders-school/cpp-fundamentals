#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) 
{
    if (numbers.size() == 0)
    {
        std::cout << "Provided vector is empty!\n";
        return 0;
    }

    auto sum = 0;
    for (auto element : numbers)
    {
        if (element % 2 == 0)
        {
            sum += element;
        }
    }

    return sum;
}
