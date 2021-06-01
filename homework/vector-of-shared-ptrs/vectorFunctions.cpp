#include "vectorFunctions.hpp"
#include <iostream>
#include <memory>
#include <vector>

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> result;
    for (int i = 0; i < count; ++i) {
        result.push_back(std::make_shared<int>(i));
    }
    return result;
}
void print(const std::vector<std::shared_ptr<int>>& result) {
    for (const auto& a : result) {
        std::cout << *a << " ";
    }
    std::cout << '\n';
}
void add10(std::vector<std::shared_ptr<int>>& result) {
    for (auto& i : result) {
        *i = (*i) + 10;
    }
}
void sub10(int const*) {}
void sub10(std::vector<std::shared_ptr<int>>&) {}