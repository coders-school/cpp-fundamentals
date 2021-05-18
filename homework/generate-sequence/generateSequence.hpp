#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {

    std::vector<int> sequence;

    for (int counter = 0; counter < count; counter++)
    {
        auto element = sequence.empty() ? step : sequence.back() + step;
        sequence.push_back(element);
    }

    return sequence;
}
