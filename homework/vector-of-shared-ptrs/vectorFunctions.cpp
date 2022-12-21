#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(const int& count) {
    std::vector<std::shared_ptr<int>> vec = {std::make_shared<int>(0)};

    for (std::size_t i = 1; i < count; ++i) {
        vec.push_back(std::make_shared<int>(i));
    }

    return vec;
}

void print(const std::vector<std::shared_ptr<int>>& vec) {
    for (const auto& el : vec) {
        std::cout << *el << " ";
    }
    std::cout << std::endl;
}

void add10(const std::vector<std::shared_ptr<int>>& vec) {
    for (const auto& el : vec) {
        if (el) {
            *el += 10;
        }
    }
}

void sub10(int* const& ptr_el) {
    if (ptr_el) {
        *ptr_el -= 10;
    }
}

void sub10(const std::vector<std::shared_ptr<int>>& vec) {
    for (const auto& el : vec) {
        sub10(el.get());
    }
}
