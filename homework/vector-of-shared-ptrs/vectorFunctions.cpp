#include <iostream>
#include <memory>
#include <vector>

#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> result;
    for (int i = 0; i < count; ++i) {
        result.push_back(std::make_shared<int>(i));
    }
    return result;
}

void print(const std::vector<std::shared_ptr<int>>& vec) {
    for (const auto& num : vec) {
        if (num) {
            std::cout << *num << " ";
        } else {
            std::cout << "null ";
        }
    }
    std::cout << std::endl;
}

void add10(std::vector<std::shared_ptr<int>>& vec) {
    for (auto& num : vec) {
        if (num) {
            *num += 10;
        }
    }
}

void sub10(int* ptr) {
    if (ptr) {
        *ptr -= 10;
    }
}

void sub10(std::vector<std::shared_ptr<int>>& vec) {
    for (auto& num : vec) {
        sub10(num.get());
    }
}