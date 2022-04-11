#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    int maxV = vec;
    for (int value : maxV ) {
        if(value > MaxV) maxV = value;
    }
    return maxV;
}
