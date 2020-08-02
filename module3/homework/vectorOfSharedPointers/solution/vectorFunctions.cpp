#include "vectorFunctions.hpp"
#include <iostream>
#include <memory>
#include <vector>

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> vec;
    vec.reserve(count);
    for (size_t i = 0; i < count; ++i) {
        vec.emplace_back(std::make_shared<int>(i));
    }

    return vec;
}

void add10(const std::vector<std::shared_ptr<int>>& vec) {
    for (auto& num : vec) {
        if (num) {
            *num += 10;
        }
    }
}

void sub10(int* const ptr) {
    if (ptr) {
        *ptr -= 10;
    }
}

void print(const std::vector<std::shared_ptr<int>>& vec) {
    for (const auto& num : vec) {
        std::cout << *num << ' ';
    }
    std::cout << std::endl;
}

void sub10(const std::vector<std::shared_ptr<int>>& vec) {
    for (auto& num : vec) {
        sub10(num.get());
    }
}
