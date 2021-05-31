#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    // TODO: Implement me :)

    std::vector<int> seq;
    int last = 0;
    for(int i=0;i<count;i++)    {
        seq.push_back(step+last);
        last = seq.back();
    }

    return seq;
}
