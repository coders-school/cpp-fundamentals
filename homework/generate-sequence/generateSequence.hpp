#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> vec;
    if (count == 0){return vec = {};}
    else{
        int vecElement = 0;
        for(int i = 0 ; i < count ; i++){
            vecElement += step;
            vec.push_back(vecElement);
        }
     return vec;   
    }
}
