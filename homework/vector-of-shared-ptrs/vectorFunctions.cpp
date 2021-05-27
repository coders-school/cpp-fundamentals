#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count)
{
    std::vector<std::shared_ptr<int>> ret;
    for(int i = 0; i < count; i++)
    {
        std::shared_ptr<int> ptr = std::make_shared<int>(i);
        ret.push_back(ptr);
    }
    return ret;
}

void print(std::vector<std::shared_ptr<int>> vec)
{
    for(auto i : vec)
    {
        std::cout<<*i<<"\n";
    }
}
void add10(std::vector<std::shared_ptr<int>> vec)
{
    for(auto i : vec)
    {
        if(i) *i += 10;
    }
}

void sub10(int* ptr)
{
    if(ptr) *ptr -= 10;
}

void sub10(std::vector<std::shared_ptr<int>> vec)
{
    for(auto i : vec)
    {
        sub10(i.get());
    }
}