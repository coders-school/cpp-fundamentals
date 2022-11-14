#include "vectorFunctions.hpp"
#include <iostream>

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> vec{};
    vec.reserve(count);

    for (auto i{0}; i < count; i++) {
        vec.push_back(std::make_shared<int>(i));
    }
    return vec;
}

void print(const std::vector<std::shared_ptr<int>>& vec) {
    for (auto& n : vec) {
        std::cout << *n;
    }
}

void add10(std::vector<std::shared_ptr<int>>& vec) {
    for (auto& n : vec) {
        if (n) {
            *n += 10;
        }
    }
}

void sub10(int* const ptr) {
    if (ptr) {
        *ptr -= 10;
    }
}

void sub10(std::vector<std::shared_ptr<int>> vec) {
    for (auto& n : vec) {
        sub10(n.get());
    }
}
