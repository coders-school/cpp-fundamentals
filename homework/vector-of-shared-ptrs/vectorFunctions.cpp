#include "vectorFunctions.hpp"
#include <algorithm>
#include <memory>

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> result(count);
    std::for_each(begin(result), end(result),
                  [number = 0](auto& ptr) mutable {
                     ptr = std::make_shared<int>(number++);
                  });
    return result;
}

void print(const myVector& vec) {}

void add10(myVector& vec) {}

void sub10(int* const value) {}

void sub10(myVector vec) {}