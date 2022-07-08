#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> sequence{};
    int tmp = step;
    if (count <= 0 )
        return sequence;
    for (int i = 0; i < count  ; i++){
        sequence.push_back(tmp);
        tmp +=step;
    }

    return sequence;
}
