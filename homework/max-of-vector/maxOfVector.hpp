#pragma once
#include <algorithm>
#include <iterator>
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    // TODO: Implement me :)
    return *std::max_element(vec.begin(), vec.end());
}
