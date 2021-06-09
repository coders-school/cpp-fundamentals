#include <string>
#include <memory>
#include <vector>
#include <iostream>

std::vector<std::shared_ptr<int>> generate(int count){
    std::vector<std::shared_ptr<int>> vec;
    for (int i = 0; i < count; i++){
        vec.push_back(std::make_shared<int>(i));
    }
    return vec;
};

void print(std::vector<std::shared_ptr<int>> const vec){
    for (auto i : vec){
        std::cout << *i << '\t';
    }
    std::cout << std::endl;
};

void add10(std::vector<std::shared_ptr<int>> vec){
    for (auto i : vec){
        *i+=10;
    }
};

void sub10(std::vector<std::shared_ptr<int>> vec){
    for (auto i : vec){
        *i-=10;
    }
};

void sub10(int* vec){
    while(vec++ != nullptr){
        *vec-=10;
    }
};
