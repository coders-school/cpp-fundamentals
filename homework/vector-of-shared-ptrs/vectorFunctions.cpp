#include "vectorFunctions.hpp"
#include <iostream>


std::vector<std::shared_ptr<int>> generate(int count)
{
    std::vector<std::shared_ptr<int>> vec(count);
    for (int i = 0; i < count; i++)
    {
        vec[i] = std::make_shared<int>(i);
    }
    return vec;
}

void print(std::vector<std::shared_ptr<int>>& vec)
{
    for (const auto& ptr : vec)
    {
        std::cout << *ptr << " ";
    }
    std::cout << std::endl;
}

void add10(std::vector<std::shared_ptr<int>>& vec)
{
    for (auto& ptr : vec)
    {
        *ptr += 10;
    }
}

void sub10(const int* num)
{
    std::cout << *num - 10 << std::endl;
}

void sub10(std::vector<std::shared_ptr<int>>& vec)
{
    for (const auto& ptr : vec)
    {
        sub10(ptr.get());
    }
}
