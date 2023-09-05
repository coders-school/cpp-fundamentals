#include <iostream>
#include <memory>
#include <vector>

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> vec;
    for (std::size_t i = 0; i < count; ++i) {
        vec.push_back(std::make_shared<int>(i));
    }
    return vec;
}
void print(std::vector<std::shared_ptr<int>> vec) {
    for (auto val : vec) {
        std::cout << *val.get() << std::endl;
    }
}
void add10(std::vector<std::shared_ptr<int>> vec) {
    for (auto val : vec) {
        if (val) {
            *val += 10;
        }
    }
}
void sub10(int* n) {
    if (n) {
        *n -= 10;
    }
}
void sub10(std::vector<std::shared_ptr<int>> vec) {
    for (auto val : vec) {
        sub10(val.get());
    }
}