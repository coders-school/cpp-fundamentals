#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    int result = std::numeric_limits<int>::min();

    for(int number: vec){
        if(number > result){
            result = number;
        }
    }

    return result;
}
