#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> SharedPtrVector;
    for (auto i = 0; i < count; i++) {
        SharedPtrVector.push_back(std::make_shared<int>(i));
    }

    return SharedPtrVector;
}

void print(std::vector<std::shared_ptr<int>> vectorToPrint) {
    for (auto const& it : vectorToPrint) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void add10(std::vector<std::shared_ptr<int>> vectorToAdd) {
    for (auto& it : vectorToAdd) {
        if (!(it.get() == nullptr))
            *it.get() += 10;
    }
}

void sub10(int* ptr) {
    if (ptr == nullptr)
        return;

    *ptr -= 10;
}

void sub10(std::vector<std::shared_ptr<int>> vectorToPrint) {
    for (auto& it : vectorToPrint) {
        if (!(it.get() == nullptr))
            sub10(it.get());
    }
}