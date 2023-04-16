#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> vec{};
    int val{0};
    for (int i{0}; i < count; ++i) {
        val += step;
        vec.push_back(val);
    }
    return vec;
}
