#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
   
    std::vector<int> vec{step};

    if(count<=0)
    {
        return {};
    }
    //vec.reserve(count);
   for(size_t i{1}; i<count; i++)
   {
       vec.emplace(vec.end(),vec[i-1]+step);
   }
    
    return vec;
}
