#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    std::vector<int> evens;
    int suma = 0;
    for(const size_t& el : numbers) {
        if(el % 2 == 0) {
            evens.push_back(el);
        }
    }
    for(const size_t& el : evens) {
        suma += el;
    }
    return suma;
}
