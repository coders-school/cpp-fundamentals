#pragma once
#include <limits>
#include <vector>
#include <algorithm>

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
