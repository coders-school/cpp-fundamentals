#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> final_vec;
    for (int i = 1; i < (count + 1); ++i) {
        final_vec.push_back(step * i);
    }
    return final_vec;
}
