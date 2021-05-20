#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int> &vec)
{
    int max_element = vec[0];
    std::vector<int> vec_max;
    for (auto &el : vec)
    {
        if (el > max_element)
        {
            max_element = el;
        }
    }
    return max_element;
}
