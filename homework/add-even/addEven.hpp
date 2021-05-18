#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int result {0};
    for (int number : numbers){
        if(number % 2 == 0){
            result += number;
        }
    }
    return result;
}
