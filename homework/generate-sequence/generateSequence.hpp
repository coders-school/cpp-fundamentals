#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    // TODO: Implement me :)

    if (count > 0){
        std::vector<int> intVector(count,step);
        for (int i=0; i<intVector.size(); ++i)
            intVector[i] = (i+1)*step;
        return intVector;
    }
    else
        return std::vector<int> {};
}
