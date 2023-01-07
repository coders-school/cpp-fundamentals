#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> result;
    int current = step;
    for (int i = 0; i < count; i++) {
        result.push_back(current);
        current += step;
    }
    return result;
}
