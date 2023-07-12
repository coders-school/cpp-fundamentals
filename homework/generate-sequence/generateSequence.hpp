#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> vec;
    if (count <= 0)
        return vec;
    vec.push_back(step);
    for (int i = 1; i < count; i++) {
        vec.push_back(vec.back() + step);
    }
    return vec;
}
