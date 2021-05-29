#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> result;
    result.reserve(count);

    for (int i = 0; i < count; i++) {
        result.push_back(std::make_shared<int>(i));
    }

    return result;
}

void print(const std::vector<std::shared_ptr<int>>& vec) {
    for (const auto& ptr : vec) {
        std::cout << *ptr << " ";
    }
}

void add10(const std::vector<std::shared_ptr<int>> vec) {
    for (auto& ptr : vec) {
        if (ptr) {
            *ptr += 10;
        }
    }
}

void sub10(int* const ptr) {
    if (ptr){
        *ptr -= 10;
    }
}

void sub10(std::vector<std::shared_ptr<int>>& vec) {
    for (const auto& elem : vec){
        sub10(elem.get());
    }
}