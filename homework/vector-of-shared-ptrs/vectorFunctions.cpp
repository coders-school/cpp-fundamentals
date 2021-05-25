#include "vectorFunctions.hpp"

#include <iostream>

using shared_pointers = std::vector<std::shared_ptr<int>>;

shared_pointers generate(int count) {
    shared_pointers pointers;
    if (count > 0) {
        pointers.reserve(count);
        for (int i{}; i < count; ++i) {
            pointers.emplace_back(std::make_shared<int>(i));
        }
    }

    return pointers;
}

void print(const shared_pointers& pointers) {
    for (const auto& ptr : pointers) {
        std::cout << *ptr << ' ';
    }
    std::cout << std::endl;
}

void add10(const shared_pointers& pointers) {
    for (const auto& ptr : pointers) {
        if (ptr) {
            *ptr += 10;
        }
    }
}

void sub10(int* const pointer) {
    if (pointer) {
        *pointer -= 10;
    }
}

void sub10(const shared_pointers& pointers) {
    for (const auto& ptr : pointers) {
        if (ptr) {
            sub10(ptr.get());
        }
    }
}
