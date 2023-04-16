#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> vec(count);
    int val{0};
    for (int i{0}; i < vec.size(); ++i) {
        val += step;
        vec.at(i) = val;
    }
    return vec;
}
