#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count)
{
    std::vector<std::shared_ptr<int>> vec;

    if (count < 0)
    {
        std::cout<<"Count lower than 0"<<std::endl;
        return vec;
    }

    for (int i = 0; i < count + 1; ++i)
    {
        vec.push_back(std::make_shared<int>(i)); 
    }

    return vec;
}

void print(std::vector<std::shared_ptr<int>> vecIn)
{
    if (vecIn.size() == 0)
    {
        std::cout<<"Vector is empty"<<std::endl;
        return;
    }

    for (auto &element : vecIn)
    {
        std::cout<<*element<<" ";
    }
    std::cout<<"\n";
}

void add10(std::vector<std::shared_ptr<int>> vecIn)
{
    if (vecIn.size() == 0)
    {
        std::cout<<"Vector is empty"<<std::endl;
        return;
    }

    for (auto &element : vecIn)
    {
        *element += 10;
    }
}

void sub10( int * const a)
{
    if (!a)
    {
        std::cout<<"Pointer is null"<<std::endl;
        return;
    }

    *a -= 10;
}

void sub10(std::vector<std::shared_ptr<int>> vecIn)
{
    if (vecIn.size() == 0)
    {
        std::cout<<"Vector is empty"<<std::endl;
        return;
    }

    for (auto &element : vecIn)
    {
        sub10(element.get());
    }
}