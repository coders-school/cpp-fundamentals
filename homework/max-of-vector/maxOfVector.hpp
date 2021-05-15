#pragma once
#include <vector>
#include <limits>
#include <algorithm>


int maxOfVector(const std::vector<int>& vec) {
    int max = vec.at(0);
    for_each(vec.begin(), vec.end(), [&max](int element){
        if (element > max) {
            max = element;
        }
    });
    return max;
}
/*
Please review this code. Which solution is better?

int maxOfVector(const std::vector<int>& vec) {
    std::vector<int> newVector = vec;
    std::sort(newVector.begin(), newVector.end());
    return newVector.at(newVector.size()-1);
}

*/