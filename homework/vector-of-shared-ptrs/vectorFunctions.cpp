#include "vectorFunctions.hpp"
#include <iostream>

using VectorPtrType = int;
using Vector = std::vector<std::shared_ptr<VectorPtrType>>;


Vector generate(const int count) {
    Vector result;
    result.reserve(count);

    for (int i = 0; i < count; ++i) {
        result.push_back(std::make_shared<VectorPtrType>(i));
    }
    return result;
}

void print(const Vector& vector) {
    for (const auto& element : vector) {
        std::cout << *element;
    } 
}

void add10(Vector& vector) {
    for (auto& element : vector) {
        if (element) {
            *element += 10;
        }
    }
}

void sub10(VectorPtrType* const element) {
    if (element) {
        *element -= 10;
    }
}

void sub10(Vector& vector) {
    for (auto& element : vector) {
        sub10(element.get());
    }
}