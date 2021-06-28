#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    int element = 0;
    if (!(vec.empty())){
        element = vec [0];
    }
    else
        return 0;
    for (auto &a : vec){
        if ( a > element)
            element = a;
    }
    return element;
}
