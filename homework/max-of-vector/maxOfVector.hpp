#pragma once
#include <vector>
#include <list>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    int max_value = vec[0];

    for (const auto& element: vec) {
        if (element > max_value) {
            max_value = element;
        }
    }
    return max_value;
}
