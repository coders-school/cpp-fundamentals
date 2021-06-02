#include <iostream>
#include <vector>
#include <memory>
#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count)
{
    std::vector<std::shared_ptr<int>> vec;
    for(int i = 0; i < count; i++)
    {
        vec.push_back(std::make_shared<int>(i));
    }
    return vec;
}
void print(std::vector<std::shared_ptr<int>> v)
{
    for(auto& i : v)
    {
        std::cout<<*i;
    }
}
void add10(std::vector<std::shared_ptr<int>> v)
{
    for(auto& i : v)
    {
        if(i)
        {
            *i += 10;
        }
    }
}
void sub10(int* const v)
{
    if(v)
    {
        *v -= 10;
    }
}
void sub10(std::vector<std::shared_ptr<int>> v)
{
    for(auto& i : v)
    {
        sub10(i.get());
    }
}
