#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int suma = 0;
    for(int n : numbers){
        if(n%2==0) suma+=n;
    }
    return suma;
}
