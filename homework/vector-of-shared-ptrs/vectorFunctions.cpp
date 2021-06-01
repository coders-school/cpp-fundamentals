#include "vectorFunctions.hpp"
#include <iostream>

std::vector<std::shared_ptr<int>> generate(int count)
{
    std::vector<std::shared_ptr<int>> result;
    for (size_t value = 0; value < count; ++value) {
        result.emplace_back(std::make_shared<int>(value));
    }
    return result;
}

void print(std::vector<std::shared_ptr<int>> vec)
{
    for (const auto& el : vec) {
        std::cout << el << '\t';
    }
    std::cout << '\n';
}

void add10(std::vector<std::shared_ptr<int>> vec)
{
    for (auto& el : vec) {
        if (el) {
            *el += 10;
        }
    }
}

void sub10(int* const ptr)
{
    if (ptr) {
        *ptr -= 10;
    }
}

void sub10(std::vector<std::shared_ptr<int>> vec)
{
    for (auto& el : vec) {
        sub10(el.get());
    }
}
