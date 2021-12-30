#include "vectorFunctions.hpp"
#include <iostream>

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> out;
    for (int i = 0; i < count; i++) {
        out.push_back(std::make_shared<int>(i));
    }
    return out;
}

void print(std::vector<std::shared_ptr<int>>& vec) {
    for (auto el: vec) {
        std::cout << *el << " ";
    }
    std::cout << std::endl;
}

void add10(std::vector<std::shared_ptr<int>>& vec) {
    for (auto el: vec) {
        if (el) {
            *el += 10;
        }
    }
}

void sub10(int * a) {
    if (a) {
        *a -= 10;
    }
}

void sub10(std::vector<std::shared_ptr<int>>& vec) {
    for (auto el: vec) {
        sub10(el.get());
    }
}
