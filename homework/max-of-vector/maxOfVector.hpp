#pragma once
#include <vector>
#include <limits>
#include <algorithm>

int maxOfVector(const std::vector<int>& vec) {
    int number = std::numeric_limits<int>::min();
    for(auto el : vec) {
        if(number < el) {
            number = el;
        }
    }
    return number;
}
