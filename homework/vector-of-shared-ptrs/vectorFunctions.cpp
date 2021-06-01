#include <iostream>
#include <vector>
#include <memory>
#include "vectorFunctions.hpp"

std::vector <std::shared_ptr<int>> generate(int count) {

    std::vector <std::shared_ptr<int>> vec;
    for (int i = 0; i < count; ++i) {        
        vec.push_back(std::make_shared<int>(i));
    }
    return vec;
}

void print(std::vector <std::shared_ptr<int>> print_vec) {

    for (auto el : print_vec) {
        if (el != nullptr){
            std::cout << *el <<  " ";
        }
    }
}

void add10(std::vector <std::shared_ptr<int>> add) {

    for (auto el : add) {
        if (el != nullptr){
            *el += 10;
        }
    }
}

void sub10( int* const sub) {

    if (sub != nullptr) {
        *sub -= 10;
    }
}

void sub10(std::vector <std::shared_ptr<int>> vec_2) {

    for (auto el : vec_2){
            sub10 (el.get());
    }
}
