#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {

    if(count <= 0 ){
        return{};
    }
    else{
        std::vector<int> vec;
        vec.push_back(step);
        for (int i = 1; i < count; i++){
            vec.push_back(step + i * step);
        }
        return {vec};

    }

}
