#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> vec{};
    vec.clear();
<<<<<<< HEAD
    if (count == 0) {
=======
    if (count <= 0) {
>>>>>>> refs/remotes/origin/generate-sequence
        return vec;
    }
    vec.push_back(step);
    int next = step;
    for (int i = 1; i < count; ++i) {
        next += step;
        vec.push_back(next);
    }
    return vec;
}
