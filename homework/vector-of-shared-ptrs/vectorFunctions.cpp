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

}

void add10(std::vector<std::shared_ptr<int>> vecIn)
{

}

void sub10(const int *a)
{

}

void sub10(std::vector<std::shared_ptr<int>> vecIn)
{
    
}