#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    
    int evenNumbersSum = 0;
    for(int element : numbers) {
        evenNumbersSum += (element % 2 == 0 ? element : 0);
    }
    return evenNumbersSum;
}
