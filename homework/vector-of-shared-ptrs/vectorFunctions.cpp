#include <vector>
#include "vectorFunctions.hpp"
#include <memory>
#include <iostream>

std::vector<std::shared_ptr<int>> vector_ptrs;

std::vector<std::shared_ptr<int>> generate(int count){

    for(auto i = 0; i < count; ++i){
        vector_ptrs.push_back(std::make_shared(i));
    }
    return vector_ptrs;
}
void print(std::vector<std::shared_ptr<int>> vector_ptrs){
    for(auto i : vector_ptrs){
        std::cout << vector_ptrs[i] << " \n";
    }
    return 0;
}
void add10(std::vector<std::shared_ptr<int>> vector_ptrs){
    for(auto i : vector_ptrs){
        vector_ptrs[i] += 10;
    }
    return 0;
}
void sub10(const int* ptrs){
    *ptrs -= 10;
    return 0;
}
void sub10(std::vector<std::shared_ptr<int>> vector_ptrs){
    for(auto i : vector_ptrs){
        sub10(i);
    }
    return 0;
}