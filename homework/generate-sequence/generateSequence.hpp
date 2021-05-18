#pragma once
#include <algorithm>
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    if (count < 1) {
        return std::vector<int>();
    }
    std::vector<int> result(count, step);
    std::generate(result.begin(), result.end(), [i = 0, step]() mutable { return step * (++i); } );
    return result;   
}
