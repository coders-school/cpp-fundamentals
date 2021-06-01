#include "vectorFunctions.hpp"

#include <iostream>

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> vec;
    for (size_t i = 0; i < count; i++) {
        vec.push_back(std::make_shared<int>(i));
    }
    
    return vec;
}

void print(std::vector<std::shared_ptr<int>> vec) {
    for(auto i: vec) {
        std::cout << *i << "\n";
    }
}