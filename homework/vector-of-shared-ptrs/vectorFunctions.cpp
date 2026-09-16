#include "vectorFunctions.hpp"
#include <iostream>

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> vec;
    vec.reserve(count);
    for (size_t i = 0; i < count; i++) {
        vec.push_back(std::make_shared<int>(i));
    }
    return vec;
}
void print(std::vector<std::shared_ptr<int>> vec) {
    for (size_t i = 0; i < vec.size(); i++) {
        std::cout << *vec[i];
    }
}
void add10(std::vector<std::shared_ptr<int>> vec) {
    for (size_t i = 0; i < vec.size(); i++) {
        if (vec[i] != nullptr)
            *vec[i] += 10;
    }
}
void sub10(int* const number) {
    if (number == nullptr)
        return;
    *number -= 10;
}
void sub10(std::vector<std::shared_ptr<int>> vec) {
    for (size_t i = 0; i < vec.size(); i++) {
        sub10(vec[i].get());
    }
}