#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec)
{
    auto max{std::numeric_limits<int>::lowest()};
    for(const auto& var : vec)
        if(var > max)
            max = var;
    return max;
}
