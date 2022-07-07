#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count){
    std::vector<std::shared_ptr<int>> v;
    for (int i = 0; i < count; i++){
        v.push_back(std::make_shared<int>(i));
    }
    return v;
}

void print(const std::vector<std::shared_ptr<int>> vecPrint){
    for (auto ele : vecPrint){
        std::cout << *ele << " ";
    }
    std::cout << '\n';
}

void add10(std::vector<std::shared_ptr<int>> vecAdd){
    for (auto el : vecAdd){
        *el += 10;
    }
}

void sub10(int * const ptr){
    *ptr -= 10;
}

void sub10(std::vector<std::shared_ptr<int>> vecSub){
    for (auto ele : vecSub){
        sub10(ele.get());
    }
}
