#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    // TODO: Implement me :)
    
    std::vector<int> vec1{step};
    int number = step;
    if (count > 0){

        for (int i = 1; i < count; i++){

            number = number + step;
            vec1.push_back(number);

        }
    }else{
    vec1.clear();
    }

    return vec1;
}
