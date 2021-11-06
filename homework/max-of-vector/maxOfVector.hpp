#pragma once
#include <vector>
#include <limits>
#include <climits>

int maxOfVector(const std::vector<int>& vec) {
    // TODO: Implement me :)
    int max = INT_MIN;
    for(const int number:vec){
        max = std::max(max, number);
    }
    return max;
}
