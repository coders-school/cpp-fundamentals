#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> generatedVector;
    for (int i = 0; i < count; i++) {
        generatedVector.emplace_back(std::make_shared<int>(i));
    }

    return generatedVector;
}

void print(const std::vector<std::shared_ptr<int>>& printVector) {
    for (auto it : printVector) {
        if (it) {
            std::cout << *it;
        }
    }
}

void add10(std::vector<std::shared_ptr<int>>& vec) {
    for (auto it : vec) {
        if (it) {
            *it += 10;
        }
    }
}

void sub10(int* const ptr) {
    if (ptr) {
        *ptr -= 10;
    }
}

void sub10(std::vector<std::shared_ptr<int>>& vec) {
    for (auto it : vec) {
        if (it) {
            sub10(it.get());
        }
    }
}