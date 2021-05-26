#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) 
{
    if (vec.size() == 0)
    {
        std::cout << "Input vector is empty\n";
        return 0;
    }

    auto max = vec[0];
    for(auto element : vec)
    {
        if (element > max)
        {
            max = element;
        }
    }

    return max;
}
