#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int results = 0;
    for (auto const& el : numbers){
        if (el % 2 == 0){
            results += el;
        }
    }
    return results;
}
