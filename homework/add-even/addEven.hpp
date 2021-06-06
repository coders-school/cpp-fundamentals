#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int sum = 0;
    for(auto i : numbers){
        if(i%2==0){
            sum += i;
        }
    }
    return sum;
}
