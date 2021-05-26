#include <iostream>
#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(const int& count) {

    std::vector<std::shared_ptr<int>> vector;
    for(int i = 0; i < count; ++i) {
        vector.push_back(std::make_shared<int>(i));
    }
    return vector;
}

void print(const std::vector<std::shared_ptr<int>>& vector) {

    for(auto ptr : vector) {
        std::cout << *ptr << "  ";
    }
    std::cout << std::endl;
}

void add10(std::vector<std::shared_ptr<int>>& vector) {

    for(auto ptr : vector) {
        if(ptr) {
            (*ptr) += 10;
        }
    }
}

void sub10(int* const pointer) {

    if (pointer) {
       (*pointer) -= 10;
    }
}

void sub10(std::vector<std::shared_ptr<int>>& vector) {
    
    for (auto ptr : vector) {
        sub10(ptr.get());
    }
}