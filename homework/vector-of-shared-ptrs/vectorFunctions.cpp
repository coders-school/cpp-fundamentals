#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> vec;

std::vector<std::shared_ptr<int>> generate(int count) {
    vec.reserve(count);
    for (int i = 0; i < count; ++i) {
        vec.emplace_back(std::make_shared<int>(i));
    }
    return vec;
}

void print(std::vector<std::shared_ptr<int>> vec) {
    for (const auto& i : vec) {
        std::cout << *i << '\n';
    }
}

void add10(std::vector<std::shared_ptr<int>> vec) {
    for (const auto& i : vec) {
        *i += 10;
    }
}

void sub10(int* const ptr) {
    *ptr -= 10;
}

void sub10(std::vector<std::shared_ptr<int>> vec) {
    for (const auto& i : vec) {
        sub10(&*i);
    }
}
