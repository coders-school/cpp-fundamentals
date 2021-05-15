#pragma once

#include <numeric>
#include <vector>

int addEven(const std::vector<int>& numbers) {
    return std::accumulate(numbers.begin(), numbers.end(),
                           0,
                           [](int sum, int val) {
                               return val % 2 ? sum : sum += val;
                           });
}
