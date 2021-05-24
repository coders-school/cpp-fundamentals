#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec)
{
    if (vec.empty()) {
        return {};
    }

    int max_element = std::numeric_limits<int>::min();
    for (const auto& el : vec) {
        if (el > max_element) {
            max_element = el;
        }
    }

    return max_element;
}
