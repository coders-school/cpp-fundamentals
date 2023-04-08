#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> vec;
    std::vector<int> v;
    if (count <= 0) {
        return v;
    } else {
        for (auto i = 0; i <= count - 1; i++) {
            vec.push_back(step * (i + 1));
        }
        return vec;
    }
}
