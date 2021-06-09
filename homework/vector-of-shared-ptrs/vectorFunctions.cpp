#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count){
    std::vector<std::shared_ptr<int>> vec;
    vec.reserve(count);
for(int i = 0; i < count; ++i){
        vec.emplace_back(std::make_shared<int>(i));
    }
    return vec;
}

void print(const std::vector<std::shared_ptr<int>>& vec){
    for(const auto & i : vec)
    {
        std::cout << *i << " ";
    }
    std::cout << '\n';
}

void add10(const std::vector<std::shared_ptr<int>>& vec){
    for(const auto & i : vec)
    {
        if(i)
        {
            *i += 10;
        }
    }
}

void sub10(int* const ptr){
    if(ptr){
        *ptr -= 10;
    }
}

void sub10(const std::vector<std::shared_ptr<int>>& vec){
    for(const auto & i : vec)
    {
        sub10(i.get());
    }
}
