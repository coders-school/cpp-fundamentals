#pragma once
#include <limits>
#include <vector>

int maxOfVector (const std::vector<int>& vec)
{
    if (vec.empty()) {
        return std::numeric_limits<int>::min();
    }

    int max { vec[0] };

    for (const auto el : vec) {
        if (el > max) {
            max = el;
        }
    }

    return max;
}
