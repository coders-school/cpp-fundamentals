#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int result = 0;

    for(auto num: numbers){
        if(num % 2 == 0){
            result += num;
        }
    }
    
    return result;
}
