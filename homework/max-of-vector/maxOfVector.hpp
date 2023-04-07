#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int max = vec[0];
    int aux;
    for (auto& el : vec) {
        aux = el;
        if (aux > max) {
            max = aux;
        }
    }
    return max;
}
