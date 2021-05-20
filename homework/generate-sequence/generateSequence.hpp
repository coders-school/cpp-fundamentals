#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> vec{};
    if (count <= 0) {
        return vec;
    }
    int element = step;
    for (int i = 0; i < count; ++i) {
        vec.push_back(element);
        element += step;
    }
    return vec;
}
