#pragma once
#include <algorithm>
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    // TODO: Implement me :)
    if (vec.empty()) {
        return 0;
    }

    auto it = std::max_element(vec.begin(), vec.end());

    return *it;
}
