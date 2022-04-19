#include "vectorFunctions.hpp"
#include <iostream>

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> vector = {};
    if (count < 1) {
        return vector;
    }
    vector.resize(count);
    for (int i = 0; i < count; i ++) {
        vector[i] = std::make_shared<int>(i);
    }
    return vector;
}

void print(std::vector<std::shared_ptr<int>>&vec) {
    for (auto &a: vec) {
        if (a != nullptr) {
            std::cout << *(a.get()) << " ";
        }
    }
}

void add10(std::vector<std::shared_ptr<int>>&vec) {
    for (auto &a: vec) {
        if (a != nullptr) {
            *a += 10;
        }
    }
}

void sub10(int * ptr) {
    if (ptr != nullptr) {
        *ptr -= 10;
    }
}

void sub10(std::vector<std::shared_ptr<int>>& vec) {
    for (auto & i : vec) {
        if (i != nullptr) {
            sub10(i.get());
    }
    }
} 