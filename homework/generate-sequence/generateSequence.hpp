#pragma once

#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> seq{};
    for (int i = 1; i <= count; i++) {
        seq.push_back(i * step);
    }
    return seq;
}
