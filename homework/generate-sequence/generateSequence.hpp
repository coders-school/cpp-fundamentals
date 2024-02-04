#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> sequence{};

    if (count <= 0) {
        return sequence;
    }

    for (auto i = step, j = 0; j < count; ++j, i += step) {
        sequence.push_back(i);
    }
    return sequence;
}
