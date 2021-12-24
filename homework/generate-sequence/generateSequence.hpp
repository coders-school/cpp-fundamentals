#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> out;
    for (int i = 1; i <= count; i++) {
        out.push_back(i * step);
    }
    return out;
}
