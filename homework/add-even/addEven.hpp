#pragma once
#include <vector>

int addEven(const std::vector<int> &numbers)
{
    int Sum = 0;
    for (auto &num : numbers)
    {
        if (!(num % 2))
        {
            Sum += num;
        };
    };
    return Sum;
}
