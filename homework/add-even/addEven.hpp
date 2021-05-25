#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    
    auto sum =0;

    for(auto& element : numbers){
        auto division_rest = element%2;
        if (division_rest == 0){
        sum += element;
        }
    }

    return sum;
}

