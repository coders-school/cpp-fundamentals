#pragma once
#include <vector>

std::vector<int> generateSequence (int count, int step)
{
    std::vector<int> vec;
    if (count > 0) {
        vec.reserve (count);

        for (auto i = 1; i <= count; ++i) {
            vec.emplace_back (step * i);
        }
    }

    return vec;
}
