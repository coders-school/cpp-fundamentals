#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count) {
    if (count < 1) {
        return {};
    }
    std::vector<std::shared_ptr<int>> vec;

    for (size_t i = 0; i < count; i++) {
        vec.push_back(std::make_shared<int>(i));
    }

    return vec;
}
void print(std::vector<std::shared_ptr<int>> vec) {
    for (auto const& el : vec) {
        std::cout << *el << '\n';
    }
}
void add10(std::vector<std::shared_ptr<int>> vec) {
    for (size_t i = 0; i < vec.size(); i++) {
        if (vec[i]) {
            *vec[i] += 10;
        }
    }
}
void sub10(int* const ptr) {
    if (ptr) {
        *ptr -= 10;
    }
}
void sub10(std::vector<std::shared_ptr<int>> vec) {
    for (const auto& el : vec) {
        sub10(el.get());
    }
}
