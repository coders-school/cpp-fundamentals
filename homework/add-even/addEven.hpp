#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int result = 0;
    for (auto n : numbers) {
        if (n % 2 == 0) {
            result += n;
        }
    }
    return result;
}
