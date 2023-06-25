#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int sum = 0;
    for (auto element : numbers) {
        if (element % 2 == 0) {
            sum += element;
        }
    }
    return sum;
}
