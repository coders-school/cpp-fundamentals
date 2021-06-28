#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int sum = 0;
    for (auto & a : numbers){
        if (a%2==0)
            sum +=a;
    }
    return sum;
}
