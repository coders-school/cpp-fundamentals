#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    if (count > 0) {
        std::vector<int> result(count, step);

        for (int i = 1; i < count; ++i) {
            result[i] += step * i;
        }

        return result;
    }

    std::vector<int> emptyVector;

    return emptyVector;
}
