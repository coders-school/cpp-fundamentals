#pragma once
#include <vector>

std::vector<int> generateSequence(const int count, const int step) {
    std::vector<int> vec{};
    int last = step;

    for (int i = 0; i < count; i++) {
        vec.push_back(last);
        last += step;
    }

    return vec;
}
