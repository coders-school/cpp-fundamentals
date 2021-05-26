#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    // TODO: Implement me :)
    int sum = step;
    std::vector<int> sum_vector{};
    for (int i = 0; i < count; i++) {
        if (i == 0) {
            sum_vector.push_back(sum);
        }
        else {
            sum += step;
            sum_vector.push_back(sum);
        }   
    }
    return sum_vector;
}
