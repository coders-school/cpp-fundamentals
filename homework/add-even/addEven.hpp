#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int i, sumeven;
    sumeven = 0;
    for (i = 0; i < numbers.size(); ++i) {
        if (numbers[i] % 2 == 0) {
            sumeven += numbers[i];
        }
    }
    return sumeven;
}
