#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> sequence;

    if (count < 0)
        return sequence;

    for (auto i = 1; i <= count; i++) {
        sequence.push_back(step * i);
    }

    return sequence;
}
