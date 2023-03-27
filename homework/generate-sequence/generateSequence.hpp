#pragma once
#include <vector>
#include <iostream>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> sequence(count, step);
    for (int i = 1; i < count; i++) {
        sequence[i] = sequence[i-1] + step;
    }
    return sequence;
}
