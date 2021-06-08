#pragma once
#include <vector>
#include <iostream>

int addEven(const std::vector<int>& numbers) {
    int suma = 0;
    for (auto element: numbers)
    {
        if ((element & 1) == 0)   
        {
            suma += element;
        }
    }
    return suma;
}
