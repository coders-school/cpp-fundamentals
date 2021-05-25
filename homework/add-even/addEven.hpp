#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    
    auto sum =0;

    for(auto element : numbers){
        int division_rest = numbers[element]%2;
        if (division_rest == 0){
        sum+=numbers[element];
        }

    }

    return sum;
}
