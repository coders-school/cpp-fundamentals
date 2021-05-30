#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count){
    std::vector<std::shared_ptr<int>> vec;
    vec.reserve(count + 1);
    for (int i = 0; i < count; i++) {
        vec.push_back(std::make_shared<int>(i));
    }
    return vec;
};

void print(std::vector<std::shared_ptr<int>> vec){
    for (auto el : vec) {
        std::cout << *el << " ";
    }
    std::cout << "\n";
};

void add10(std::vector<std::shared_ptr<int>> vec){
    for (auto el : vec) {
        *el += 10;
    }
};

void sub10(int* const ptr){
    *ptr -= 10;
};

void sub10(std::vector<std::shared_ptr<int>> vec){
    for (auto el : vec) {
        int* const ptr = el.get();
        sub10(ptr);
    }
};
