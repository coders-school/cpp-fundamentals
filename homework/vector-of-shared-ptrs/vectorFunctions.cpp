#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> tempVector(count);
    for (int i = 0; i < count; i++) {
        tempVector[i] =  std::make_shared<int> (i);
    }
    return tempVector;
}

void print(const std::vector<std::shared_ptr<int>>& vec) {
    for (const auto& item : vec) {
        std::cout << *item << "\n";
    }
}

void add10(std::vector<std::shared_ptr<int>>& vec) {
    for (const auto& item : vec) {
        *item += 10;
    }
}

void sub10(int* vec) {

}

void sub10(std::vector<std::shared_ptr<int>> vec) {

}