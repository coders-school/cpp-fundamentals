#pragma once
#include <vector>
#include <limits>
#include <numeric>
#include <algorithm>

int maxOfVector(const std::vector<int>& vec) {
     
auto number = std::max_element(vec.begin(),vec.end());

    return *number;
}
