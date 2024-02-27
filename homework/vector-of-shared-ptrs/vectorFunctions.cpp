#include "vectorFunctions.hpp"
#include <iostream>
#include <vector>
#include <memory>

std::vector<std::shared_ptr<int>> smartvector;
std::vector<std::shared_ptr<int>> generate(int count) {
    size_t i = 0;
    for (i; i < count; ++i){
        smartvector.push_back(std::make_shared<int>(i));
    }
    return smartvector;
}

void print(std::vector<std::shared_ptr<int>> printout) {
    std::cout << "\n";
    for (auto & element : printout) {
        std::cout << * element << "\n";
    }
}

void add10(std::vector<std::shared_ptr<int>> addten) {
    for (auto & element : addten) {
        if (element != nullptr ) {
            * element += 10;
        }
    }
}

void sub10( int * const p) {
    * p -= 10;
}

void sub10(std::vector<std::shared_ptr<int>>  subten) {
    int * pointer;
    for (auto element : subten) {
        if (element.get() != nullptr ) {
            pointer = element.get();
            sub10( pointer );
        }
    }
}
