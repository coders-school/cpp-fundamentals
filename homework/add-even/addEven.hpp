#pragma once
#include <vector>
#include <numeric>

int addEven(const std::vector<int>& numbers) {
    return std::accumulate(numbers.begin(), numbers.end(), 0, [](int sum, int value) { return (value % 2)? sum : sum + value; } );
}
