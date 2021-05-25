#pragma once
#include <vector>

int addEven(const std::vector<int> &numbers)
{

    int sum = 0;

    for (const auto &r : numbers)
    {
        if (r % 2 == 0)
        {
            sum += r;
        }
    }
    return sum;
}
