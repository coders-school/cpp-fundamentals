#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> vec{};
    vec.reserve(count);
    for (int i{0}; i < count; ++i) {
        vec.emplace_back(std::make_shared<int>(i));
    }
    return vec;
}

void print(const std::vector<std::shared_ptr<int>>& vec) {
    for (const auto& ptr : vec) {
        std::cout << *ptr.get() << ' ';
    }
    std::cout << '\n';
}

void add10(std::vector<std::shared_ptr<int>>& vec) {
    for (auto& el : vec) {
        if (el) {
            *el += 10;
        }
    }
}

void sub10(int* const ptr) {
    if (ptr) {
        *ptr -= 10;
    }
}

void sub10(std::vector<std::shared_ptr<int>>& vec) {
    for (auto& el : vec) {
        sub10(el.get());
    }
}