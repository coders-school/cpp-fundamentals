#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {

    std::vector<int> qwert;
    int a = 0;
    for(int i=0; i < count; i++)
    {
        a = a+step;
        qwert.push_back(a);
    }

    return qwert;
}
