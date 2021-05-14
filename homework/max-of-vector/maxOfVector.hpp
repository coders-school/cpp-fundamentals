#pragma once
#include <vector>
#include <limits>
#include <algorithm>

int maxOfVector(const std::vector<int>& vec) {
    auto result = std::max_element(vec.begin(), vec.end());
    // std::sort(vec.begin(), vec.end(), [](int a, int b) {
    //     return a > b;
    // });
    // return vec.begin();
    return *result;
}
