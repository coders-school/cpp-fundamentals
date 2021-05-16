#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector <int> vec {0};
    vec[0] = step;
    if (count <=0) {
        return {};
    }
    for (auto i = 1; i < count ; ++i) {
        vec.push_back (vec[i-1] + step);
    }
    return vec;
}
