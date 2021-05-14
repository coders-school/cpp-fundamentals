#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> vec;
    if (count < 0) count = 0; // return empty vector for negative count
    vec.reserve(count);
    int tmp = step;
    for (int i = 0; i < count; i++) {
        vec.push_back(tmp);
        tmp += step;
    }
    return vec;
}
