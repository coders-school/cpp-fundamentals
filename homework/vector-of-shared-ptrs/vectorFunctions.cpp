#include "vectorFunctions.hpp"
#include <iostream>

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> vec;
    for (int i = 0; i < count; i++) {
        vec.push_back(std::make_shared<int>(i));
    }

    return vec;
}

void print(const std::vector<std::shared_ptr<int>> & vec) {
    for (const auto & elem : vec) {
        std::cout << *elem << "  ";
    }
    std::cout << "\n";
}

void add10(const std::vector<std::shared_ptr<int>> & vec) {
    for (auto & elem : vec) {
        if (elem == nullptr) {
            continue;
        }
        *elem += 10;
    }
}

void sub10(int * const ptr) {
    if (ptr == nullptr) {
        return;
    }
    *ptr -= 10;
}

void sub10(const std::vector<std::shared_ptr<int>> & vec) {
    for (auto & elem : vec) {
        sub10(elem.get());
    }
}
