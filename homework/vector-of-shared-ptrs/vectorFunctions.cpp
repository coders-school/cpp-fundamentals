#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count)
{
    std::vector<std::shared_ptr<int>> vec;
    for(int i = 0; i < count + 1; ++i)
    {
        vec.push_back(std::make_shared<int>(i)); 
    }

    return vec;
}

void print(std::vector<std::shared_ptr<int>> vecIn)
{
    for(auto &element : vecIn)
    {
        std::cout<<*element<<" ";
    }
    std::cout<<"\n";
}

void add10(std::vector<std::shared_ptr<int>> vecIn)
{
    for(auto &element : vecIn)
    {
        *element += 10;
    }
}

void sub10(const int *a)
{

}

void sub10(std::vector<std::shared_ptr<int>> vecIn)
{
    
}