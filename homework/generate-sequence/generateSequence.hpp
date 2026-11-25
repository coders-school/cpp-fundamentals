#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> sequence;
    for(int i = 1; i <= count; ++i) {
        sequence.push_back(i * step);
    }
    return sequence;
}
