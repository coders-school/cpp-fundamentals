#include "vectorFunctions.hpp"


std::vector<std::shared_ptr<int>> generate(int count){
    
    std::vector<std::shared_ptr<int>> vec;
    
    for(size_t i = 0; i <count; i++){
        vec.push_back(std::make_shared<int>(i));
    }
    return vec;
}

void print(std::vector<std::shared_ptr<int>> vector){
    for(const auto& el:vector){
        std::cout << *el << " ";
    }
    std::cout << "\n";
}

void add10(std::vector<std::shared_ptr<int>> vec){
    for (auto i: vec){
        if(i){
        *i += 10;    
        }
        
    }
}

void sub10(int* const ptr){
    if(ptr !=nullptr){
        *ptr -= 10;
    }
}

void sub10(std::vector<std::shared_ptr<int>> vec){
    for(auto i: vec){
        if(i)
        sub10(i.get());
    }
}

