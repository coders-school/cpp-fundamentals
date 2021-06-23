#pragma once
#include <iostream>
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    
    std::vector<int> vec;
    if (count > 0) {
        vec.reserve(count);

        int element = step;
        vec.push_back(element);

        for (size_t idx = 1; idx < count; ++idx) {
            element += step;
            vec.push_back(element);
        }
        return vec;
    }
    return vec;
}
