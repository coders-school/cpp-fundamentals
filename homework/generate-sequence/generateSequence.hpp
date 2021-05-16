#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {

    std::vector<int> sequence;
    if (count > 0) {
        int value = step;
        for(std::size_t i = 0; i < count; i++) {
            sequence.push_back(value);
            value += step;
        }
    }
    return sequence;
}
