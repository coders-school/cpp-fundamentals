#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int result = 0;

    if (numbers.size() > 0) {
        for (auto num : numbers) {
            if (num % 2 == 0 && num != 0) {
                result += num;
            }
        }
    }

    return result;
}
