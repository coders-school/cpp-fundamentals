#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> generated_vector;
    generated_vector.reserve(count);
    for (int value = 0; value < count; value++) {
        generated_vector.push_back(std::make_shared<int>(value));
    }
    return generated_vector;
}

void print(std::vector<std::shared_ptr<int>> vec) {
    for (auto value : vec) {
        if (value != nullptr) {
            std::cout << *value << '\t'; 
        }
    }
}

void add10(std::vector<std::shared_ptr<int>> vec) {
    for (auto value : vec) {
        if (value != nullptr) {
            *value += 10;
        }
    }
}

void sub10(int *const ptr) {
    if( ptr != nullptr) {
        *ptr -= 10;
    }
}

void sub10(std::vector<std::shared_ptr<int>> vec) {
    for(auto value : vec) {
        if (value != nullptr){
            sub10(value.get());
        }
    }
}