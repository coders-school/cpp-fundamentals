#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
   std::vector<int> vec{step};
        if(count < 0){

           vec.pop_back();
            return vec;

        }
        for (size_t i=0;i<count-1;i++){
            vec.push_back(vec[i]+step);
        }
        return vec;
}
