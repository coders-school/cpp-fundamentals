#include "vectorFunctions.hpp"
#include <iostream>

std::vector<std::shared_ptr<int>> generate(const int& count) {
    std::vector<std::shared_ptr<int>> vec;
    vec.reserve(count);

    for (int i = 0; i < count; ++i) {
        vec.emplace_back(std::make_shared<int>(i));
    }

    return vec;
}

void print(const std::vector<std::shared_ptr<int>>& vec) {
    for (auto ptr : vec) {
        std::cout << *ptr << " ";
    }

    std::cout << std::endl;
}

void add10(std::vector<std::shared_ptr<int>>& vec) {
    for (auto ptr : vec) {
        if (ptr) {
            *ptr += 10;
        }
    }
}

void sub10(int* const ptr) {
    if (ptr) {
        *ptr -= 10;
    }
}

void sub10(std::vector<std::shared_ptr<int>>& vec) {
    for (auto ptr : vec) {
        sub10(ptr.get());
    }
}
