#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> vec = {};
    int add = step;

    for (int i = 0; i < count; i++) {
        vec.push_back(add);
        add += step;
    }
    return vec;
}
