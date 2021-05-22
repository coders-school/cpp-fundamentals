#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    if(count <= 0 ) {
        return {};
    }
    std::vector<int> vec{step};
    for(int i = 0; i < count - 1; i++) {
        vec.push_back(vec[i] + step);
    }
    return vec;
}
