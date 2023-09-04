#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int result = 0;
    for (unsigned int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] % 2 == 0) {
            result += numbers[i];
        }
    }
    return result;
}
