#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int suma = 0;
    for(int number : numbers){
        if(number%2==0) suma+=number;
    }
    return suma;
}
