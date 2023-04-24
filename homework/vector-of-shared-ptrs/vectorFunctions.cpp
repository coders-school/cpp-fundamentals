#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int n) {
    std::vector<std::shared_ptr<int>> vec(n);
    for (int i{0}; i < vec.size(); ++i)
        vec.at(i) = std::make_shared<int>(i);
    return vec;
}

void print(const std::vector<std::shared_ptr<int>>& vec) {
    for (const auto& e : vec)
        std::cout << *e << " ";
    std::cout << std::endl;
}

void add10(std::vector<std::shared_ptr<int>>& vec) {
    for (auto& e : vec) {
        if (e == nullptr)
            e = nullptr;
        else
            *e += 10;
    }
}

void sub10(int* const val) {
    if (val == nullptr)
        return;
    *val -= 10;
}

void sub10(std::vector<std::shared_ptr<int>>& vec) {
    for (auto& e : vec)
        sub10(e.get());
}
