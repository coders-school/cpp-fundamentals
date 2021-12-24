#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    auto i = vec.begin();
    int max_el = *i;
    while (++i != vec.end()) {
        if (*i > max_el) {
            max_el = *i;
        }
    }
    return max_el;
}
