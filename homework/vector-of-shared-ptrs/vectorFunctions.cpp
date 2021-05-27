#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count)
{   
    std::vector<std::shared_ptr<int>> vec;
    vec.reserve(count);
    for (int i=0; i<count; ++i){
        auto tmp=std::make_shared<int>(i);
        vec.push_back(tmp);
    }
    return vec;
}

void print(const std::vector<std::shared_ptr<int>>& vec)
{
    for(auto i: vec){
        std::cout<<*i;
    }
}

void add10(const std::vector<std::shared_ptr<int>>& vec)
{
    for(auto i: vec){
        if(i){*i+=10;}
    }
}

void sub10(int* element)
{
    if(element){
        *element-=10;
    }
}

void sub10(const std::vector<std::shared_ptr<int>>& vec)
{
    for(auto i: vec){
        sub10(i.get());
    }
}
