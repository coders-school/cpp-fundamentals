#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step)
{
    std::vector<int> afterGeneratedSequence;

    int temp = step;

    for (int i = 1; i <= count; ++i)
    {
        afterGeneratedSequence.push_back(step);
        step += temp;
        //std::cout << countedElements.size() << " | ";
        //std::cout << countedElements.capacity() << "\n";
    }
    afterGeneratedSequence.shrink_to_fit();

    //std::cout << countedElements.size() << " | ";
    //std::cout << countedElements.capacity() << "\n";

    return afterGeneratedSequence;
}

