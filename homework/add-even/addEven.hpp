#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int evenSum = 0;

    for (auto elem : numbers) {
        if(not (elem % 2)) evenSum += elem;
    }
    return evenSum;
}
