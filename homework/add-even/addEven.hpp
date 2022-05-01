#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int suma = 0;
    for(int a : numbers)
    {
        if(a%2==0){
            suma=suma+a;
        }
    }
        return suma;
}
