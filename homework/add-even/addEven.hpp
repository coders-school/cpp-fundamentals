#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int evenSum = 0;
    for (unsigned int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] % 2 == 0) {
            evenSum += numbers[i];
        }
    }
    return evenSum;
}
