#include "vectorFunctions.hpp"

#include <vector>
#include <memory>
#include <iostream>
std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> vec;
    vec.reserve(count);
    for(int i = 0; i < count; ++i) {
        vec.emplace_back(std::make_shared<int>(i));
    }
    return vec;
}

void print(const std::vector<std::shared_ptr<int>> vec) {
    for(const auto& value: vec) {
        std::cout << *value;
    }
}

void add10(std::vector<std::shared_ptr<int>> vec) {
    for(const auto& value: vec) {
        std::cout << *value + 10;
    }
}

void sub10(int * const ptr) {
    *ptr =- 10;
}

void sub10(std::vector<std::shared_ptr<int>> vec) {
    for(const auto& value: vec) {
        sub10(value.get());
    }
}
