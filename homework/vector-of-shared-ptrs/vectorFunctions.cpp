#include "vectorFunctions.hpp"
#include <iostream>
#include <memory>
#include <vector>

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> vec{};

    for (size_t it = 0; it < count; ++it) {
        vec.emplace_back(std::make_shared<int>(it));
    }

    return vec;
}
void print(std::vector<std::shared_ptr<int>> vec) {
    for (auto& el : vec) {
        std::cout << *el << " ";
    }
}
void add10(std::vector<std::shared_ptr<int>> vec) {
    for (auto& el : vec) {
        if (el) {
            *el += 10;
        }
    }
}
void sub10(int * const ptr) {
    if (ptr != nullptr) {
        *ptr -= 10;
    }
}
void sub10(std::vector<std::shared_ptr<int>> vec) {
    for (auto& el : vec) {
        if(el) {
            sub10(el.get());
        }
    }

}
