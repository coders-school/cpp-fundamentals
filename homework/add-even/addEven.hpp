#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
   
    std::vector<int> newVector;
    int sum = 0;
    
    for (int i = 0; i < numbers.size(); i++){
        
        if( numbers[i] % 2 == 0){
            newVector.push_back(numbers[i]);
        }
    }
    
    for (int j = 0; j < newVector.size(); j++){
        sum = newVector[j] + sum;
    }    
    
    return sum;
