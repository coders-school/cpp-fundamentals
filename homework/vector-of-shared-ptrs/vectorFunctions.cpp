#include "vectorFunctions.hpp"
#include <iostream>
#include <memory>
#include <string>
#include <vector>

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> v;
    for (int i = 0; i < count; i++) {
        v.push_back(std::make_shared<int>(i));
    }
    return v;
}

void print(const std::vector<std::shared_ptr<int>> vecPrint) {
    for (auto ele : vecPrint) {
        std::cout << *ele << " ";
    }
    std::cout << '\n';
}

void add10(std::vector<std::shared_ptr<int>> vecAdd) {
    for (auto el : vecAdd) {
       if (el != nullptr) {
           *el += 10;
        }
    }
}

void sub10(int* const ptr) {
   if (ptr != nullptr) {
       *ptr -= 10;
    }
}

void sub10(std::vector<std::shared_ptr<int>> vecSub) {
    for (auto ele : vecSub) {
        sub10(ele.get());
    }
}
