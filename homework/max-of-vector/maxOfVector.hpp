#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    int naj = vec.front();
    for (int n : vec) {
        if(n > naj) naj = n;
    }
    return naj;
}
