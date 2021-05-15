#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec)
{
    int temp = vec[0];
    for(const auto & i : vec)
    {
        if(temp < i)
        {
            temp = i;
        }
    }
    return temp;
}
