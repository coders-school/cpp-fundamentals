#pragma once
#include <vector>
#include <limits>
#include <algorithm>

int maxOfVector(const std::vector<int>& vec) {
    // TODO: Implement me :)

    auto result = std::max_element(vec.begin(), vec.end());
    return *result;
}
