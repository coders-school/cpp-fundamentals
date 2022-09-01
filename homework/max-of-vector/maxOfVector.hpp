#pragma once
#include <algorithm>
#include <limits>
#include <vector>

template <class ForwardIt>
int maxOfVector(ForwardIt first, ForwardIt last) {
    if (first == last)
        return *last;

    ForwardIt largest = first;
    ++first;
    for (; first != last; ++first) {
        if (*largest < *first) {
            largest = first;
        }
    }
    return *largest;
}

int maxOfVector(const std::vector<int>& vec) {
    return maxOfVector(vec.begin(), vec.end());
}
