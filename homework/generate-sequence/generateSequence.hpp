#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> numbers{};
    int temp {0};
    if(count <= 0){
        return numbers;
    }
    else{
        do{
            temp += step;
            numbers.push_back(temp);
            count--;
        }while(count > 0);
        return numbers;
    }
}
