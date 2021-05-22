#pragma once
#include <vector>

int maxOfVector(const std::vector<int> &vec)
{
    int max_element = vec[0];
    
    for (auto &el : vec)
    {
        if (el > max_element)
        {
            max_element = el;
        }
    }
    return max_element;
}
