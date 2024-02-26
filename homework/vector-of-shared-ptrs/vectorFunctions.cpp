#include "vectorFunctions.hpp"
#include <iostream>
#include <vector>
#include <memory>

std::vector<std::shared_ptr<int>> smartvector;
std::vector<std::shared_ptr<int>> generate(int count) {
    int i = 0;
    for (i; i<count; ++i){
        smartvector.push_back(std::make_shared<int>(10+i));
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
        * element += 10;
    }
}

void sub10( int * const p) {
    * p -= 10;
}

void sub10(std::vector<std::shared_ptr<int>>  subten) {
    int * pointer;
    for (auto element : subten) {
        pointer = element.get();
        sub10( pointer );
    }
}
