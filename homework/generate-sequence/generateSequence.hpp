#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {

    std::vector<int>elements;
    
    int tmp=step;


    if(count<=0)
    return elements;

    for (int i=0;i<count;i++)
    {
        elements.push_back(tmp);
        tmp+=step;
        
    }

    return elements ;
}
