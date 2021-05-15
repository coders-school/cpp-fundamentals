#pragma once

#include <algorithm>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    auto greatest{ std::max_element(vec.begin(), vec.end()) };

    return greatest != vec.end() ? *greatest : 0;
}
