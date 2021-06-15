#include "vectorFunctions.hpp"
#include <vector>
#include <iostream>

std::vector<std::shared_ptr<int>> generate(int count){
    std::vector<std::shared_ptr<int>> v;
    for(int i=0;i<count;i++){
        v.push_back(std::make_shared<int>(i));
    }
    return v;
}

void print(std::vector<std::shared_ptr<int>> v){
    for(auto i : v){
        std::cout << *i << std::endl;
    }
}

void add10(std::vector<std::shared_ptr<int>> v){
    for(int i=0;i<v.size();i++){
        if(v[i] != nullptr) *v.at(i).get() += 10;
    }
}

void sub10(int *a){
    if(a != nullptr) *a -= 10;
}

void sub10(std::vector<std::shared_ptr<int>> v){
    for(int i=0;i<v.size();i++){
        sub10(v.at(i).get());
    }
}