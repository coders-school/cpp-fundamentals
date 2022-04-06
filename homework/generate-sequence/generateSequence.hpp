#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> vec = {};

    for (auto i = 0; i < count; ++i) {
        if (vec.empty()) {
            vec.push_back(step);
        } else {
            auto last_element = vec.back();
            vec.push_back(step + last_element);
        }
    }

    return vec;
}
