#pragma once
#include <vector>
#include <algorithm>

std::vector<int> generateSequence(int count, int step) {
    if (count <= 0){
        std::vector<int> vec;
        return vec;
    } else {
    std::vector<int> vec(count);
    auto results = 0;
    std::generate(vec.begin(), vec.end(), [&step, &results]() { 
        results += step;
        return results; 
    });
    return vec;
    }
}
