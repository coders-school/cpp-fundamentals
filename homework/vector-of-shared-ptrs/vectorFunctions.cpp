#include <iostream>

#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count)
{
    std::vector<std::shared_ptr<int>> a;
    for(int i=0;i<count;i++)
    {
        std::shared_ptr<int> b(new int(i));
        a.push_back(b);
    }
    return a;
}

void print(std::vector<std::shared_ptr<int>>a)
{
    for (auto i:a)
        std::cout<<*i<<" ";
    std::cout<<"\n";
}

void add10(std::vector<std::shared_ptr<int>> a)
{
    
    for(auto i:a)
    {
        if(!(i==nullptr))
            *i+=10;
    }
    
}

void sub10(std::vector<std::shared_ptr<int>> a)
{
    for(auto i:a)
    {
        if(!(i==nullptr))
            *i-=10;
    }

}

void sub10(int * const a)
{
    if(a!=nullptr)
        *a-=10;
}