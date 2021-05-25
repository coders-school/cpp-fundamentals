#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int sum_vec = {};
    for(const auto& number: numbers)
    {
        if(number % 2 == 0) {
            sum_vec += number;
        }
    }

   return sum_vec;
}
