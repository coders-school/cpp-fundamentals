#pragma once
#include <cmath>
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    // TODO: Implement me :)
    std::vector<int> sequence {};
    if (count <= 0) {
        return sequence;
    }
    int temporary = step;
    for (int i = 0; i < count; i++) {
        sequence.push_back(temporary);
        temporary += step;
    }
    return sequence;
}
