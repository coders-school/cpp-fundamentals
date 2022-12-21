#pragma once
#include <vector>

std::vector<int> generateSequence(const int count, const int step) {
    // TODO: Implement me :)
    if (count < 1) {
        return {};
    }

    std::vector<int> sequence = {step};

    for (std::size_t i = 1; i < count; ++i) {
        sequence.push_back(sequence[i - 1] + step);
    }

    return sequence;
}
