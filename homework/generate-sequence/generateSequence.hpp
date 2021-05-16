#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    // TODO: Implement me :)
    if(count <= 0)
    {
        return {};
    }
    std::vector<int> returnedVec{};
    returnedVec.reserve(count);
    returnedVec.emplace_back(step);
    
    for(int i=1; i< count; ++i)
    {
        returnedVec.emplace_back(returnedVec[i-1]+step);
    }

    return returnedVec;
}
