#include <vector>
#pragma once

std::vector<int> generateSequence(int count, int step) {
    if (count <= 0) {
        return {};
    }

    std::vector<int> sequence(count);
    for (int i = 0; i < count; i++) {
        sequence[i] = (i == 0) ? step : sequence[i - 1] + step;
    }
    return sequence;
}
