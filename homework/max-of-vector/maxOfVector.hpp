#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    // TODO: Implement me :)
    int result = vec[0];

    for(const auto& el : vec ){
        if (el > result) {
            result = el;
        }
    }

    return result;
}
