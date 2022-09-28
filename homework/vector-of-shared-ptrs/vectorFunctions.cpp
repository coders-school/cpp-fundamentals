#include "vectorFunctions.hpp"
#include <iostream>

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> vec;
    for (int i = 0 ; i < count ; i++) {
        vec.push_back(std::make_shared<int>(i));
    }
    return vec;
}

void print(const std::vector<std::shared_ptr<int>>& vec) {
    for (auto a : vec) {
        std::cout << *a << "\n";
    }
}

void add10(const std::vector<std::shared_ptr<int>>& vec) {
    for (auto a : vec) {
        *a += 10;
    }
}

void sub10(int* const num) {
    if (num) {
        *num -= 10;
    }
}

void sub10(const std::vector<std::shared_ptr<int>>& vec) {

}
