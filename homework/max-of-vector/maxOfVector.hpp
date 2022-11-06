#pragma once
#include <algorithm>
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    std::vector<int> vec1;
    int a{0};
    for (auto n : vec) {
        vec1.push_back(n);
    }
    sort(vec1.begin(), vec1.end());
    a = vec1.back();

    return a;
}
