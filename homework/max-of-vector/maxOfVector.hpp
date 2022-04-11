#pragma once
#include <vector>
#include <limits>

int maxOfVector(std::vector<int> numbers) {
    int maxNumber = numbers[0];
    for(int i = 1; i < numbers.size(); i++) {
        if(maxNumber < numbers[i]) maxNumber = numbers[i];
    }
    return maxNumber;
}

