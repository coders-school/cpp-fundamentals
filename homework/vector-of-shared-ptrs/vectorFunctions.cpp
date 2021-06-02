
#include "vectorFunctions.hpp"
#include <iostream>

std::vector<std::shared_ptr<int>> vector_ptrs;

std::vector<std::shared_ptr<int>> generate(int count){

    for(auto i = 0; i < count; ++i){
        vector_ptrs.push_back(std::make_shared<int>(i));
    }
    return vector_ptrs;
}
void print(std::vector<std::shared_ptr<int>> vector_ptrs){
    for(auto i : vector_ptrs){
        std::cout << *i << " \n";
    }
}
void add10(std::vector<std::shared_ptr<int>> vector_ptrs){
    for(auto i : vector_ptrs){
        if(i){
            *i += 10;
        }
    }
}
void sub10(int* const ptrs){
    if(ptrs){
        *ptrs -= 10;
    }
}
void sub10(std::vector<std::shared_ptr<int>> vector_ptrs){
    for(auto i : vector_ptrs){
        sub10(i.get());
    }
}