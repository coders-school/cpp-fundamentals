#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> vec{};
    vec.clear();
    if (count == 0) {
        return vec;
    }
    vec.push_back(step);
    int next = step;
    for (int i = 1; i < count; ++i) {
        next += step;
        vec.push_back(next);
    }
    return vec;
}
