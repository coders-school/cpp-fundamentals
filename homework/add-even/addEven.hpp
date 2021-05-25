#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int sum = 0;

    for (const auto& el : numbers) {
        if (el == 0) {
            sum += el;
        } else if (el % 2 != 0) {
            
        } else {
            sum += el;
        }
    }
    std::cout << "result = " << sum;
    return sum;  
}
