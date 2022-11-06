#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> vec;
    const int a = step;
    for (auto i{0}; i < count; i++) {
        vec.push_back(step);
        step += a; }
     return vec;
}
