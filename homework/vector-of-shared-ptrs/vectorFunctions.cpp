#include "vectorFunctions.hpp"
#include <iostream>
#include <memory>
#include <vector>

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> vec;
    for (int i = 0; i < count; i++) {
        vec.push_back(std::make_shared<int>(i));
    }
    return vec;
}

void print(std::vector<std::shared_ptr<int>> vec) {
    for (const auto& elem : vec) {
        std::cout << *elem << " ";
    }
}

void add10(std::vector<std::shared_ptr<int>> vec) {
    for (auto& elem : vec) {
        if (elem != nullptr) {
        *elem += 10;
        }
    }
}

void sub10(int* const pointer) {
    if (pointer != nullptr) {
    *pointer -= 10;
    }
}

void sub10(std::vector<std::shared_ptr<int>> vec) {
    for (auto& elem : vec) {
        sub10(elem.get());
    }
}