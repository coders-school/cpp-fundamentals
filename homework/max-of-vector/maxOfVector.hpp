#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int max_vector = vec.front();

    for (auto element : vec) {
        if (element > max_vector) {
            max_vector = element;
        }
    }

    return max_vector;
}
