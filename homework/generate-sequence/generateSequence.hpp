#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    
    if (count <= 0) {
        return {};
    }
    
    std::vector<int> seq(count, step);
    for (unsigned int i = 1; i < count; ++i) {
        seq[i] = seq[i - 1] + step;
    }
    
    return seq;
}
