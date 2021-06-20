#include "vectorFunctions.hpp"
#include <algorithm>
#include <iostream>

std::vector<std::shared_ptr<int>> generate(int countNumber) {
    std::vector<std::shared_ptr<int>> result(countNumber);
    std::for_each(begin(result), end(result),
                  [number = 0](auto& pointer) mutable {
                      pointer = std::make_shared<int>(number++);
                  });
    return result;
}

void print(std::vector<std::shared_ptr<int>> vec) {
    for (auto& element : vec) {
        std::cout << *element << "\n";
    }
    std::cout << "\n";
}

void add10(std::vector<std::shared_ptr<int>> vec) {
    for (auto& element : vec) {
        if (element == nullptr)
            continue;
        *element += 10;
    }
}

void sub10(int* const element) {
    if (element == nullptr)
        return;
    *element -= 10;
}

void sub10(std::vector<std::shared_ptr<int>> vec) {
    for (auto& element : vec) {
        sub10(element.get());
    }
}