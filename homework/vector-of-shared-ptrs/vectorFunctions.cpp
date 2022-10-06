#include "vectorFunctions.hpp"
#include "iostream"

VectorOfIntSharedPointers generate(int count) {
    std::vector<std::shared_ptr<int>> vec;
    for (int i = 0; i < count; ++i) {
        vec.push_back(std::make_shared<int>(i));
    }
    return vec;
}

void print(const VectorOfIntSharedPointers& vec) {
    for (const auto& element : vec) {
        std::cout << *element;
    }
    std::cout << "\n";
}

void add10(VectorOfIntSharedPointers& vec) {
    for (auto& element : vec) {
        if (element) {  // checks if the element is not a null pointer
            *element += 10;
        }
    }
}

void sub10(int* const ptr) {
    if (ptr) {  // checks if the element is not a null pointer
        *ptr -= 10;
    }
}

void sub10(VectorOfIntSharedPointers& vec) {
    for (auto& element : vec) {
        sub10(element.get());
    }
}
