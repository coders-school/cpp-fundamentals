#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int suma=0;
    for(int i:numbers){
        if(!(i&1)){suma+=i;}
    }
    return suma;
}
