#include "vectorFunctions.hpp"
#include <iostream>


std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> v {};

    // v.reserve(count);
    std::cout << "size: " << v.size() << "\ncapacity: " << v.capacity() << std::endl;

    for (int i = 0; i < count; i++) {
        v.push_back(std::make_shared<int>(i));
    }
    return v;
}

void print(const std::vector<std::shared_ptr<int>>& v) {
    for (const auto& el : v) {
        std::cout << *el << ",";
    }
    std::cout << std::endl;
}

void add10(std::vector<std::shared_ptr<int>>& v) {
    for (const auto& el : v) {
        if (el) {
            *el += 10;
        }
    }
}

void sub10(int* const p_element) {
    if (p_element) {
        *p_element -= 10;
    }
}

void sub10(std::vector<std::shared_ptr<int>>& v) {
    for (const auto& el : v) {
        if (el) {
            sub10(el.get());
        }
    }
}
