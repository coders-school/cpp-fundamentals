#include "vectorFunctions.hpp"
#include <vector>

std::vector<std::shared_ptr<int>> generate(const int& count) {
    std::vector<std::shared_ptr<int>> vec;

    for (size_t i = 0; i < count; i++) {
        vec.push_back(std::make_shared<int>(i));
    }
    return vec;
}

void print(const std::vector<std::shared_ptr<int>>& vec) {
    for (auto& el : vec) {
        std::cout << *el << std::endl;
    }
}

void add10(std::vector<std::shared_ptr<int>>& vec) {
    for (auto& el : vec) {
        if (el) {
            *el += 10;
        }
    }
}
void sub10(int* ptr) {
    if (ptr) {
        *ptr -= 10;
    }
}
void sub10(std::vector<std::shared_ptr<int>>& vec) {
    for (auto& el : vec) {
        sub10(el.get());
    }
}
