#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step)
{
    if (count <= 0) {
        return {};
    }

    std::vector<int> generated_sequence(count);

    int distance = step;
    for (auto& el : generated_sequence) {
        el = distance;
        distance += step;
    }

    return generated_sequence;
}
