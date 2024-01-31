#pragma once
#include <limits> //sugestia? :D
#include <vector>

#include <algorithm> //method with max_element algorithm

int maxOfVector(const std::vector<int>& vec) {
    
    std::vector<int>::const_iterator resultIt = std::max_element(vec.begin(), vec.end());
    return *resultIt;
}
