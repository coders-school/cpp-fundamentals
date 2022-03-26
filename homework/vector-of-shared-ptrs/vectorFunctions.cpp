#include"vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count)
{
    std::vector<std::shared_ptr<int>> vec;
    for (int i = 0; i < count; i++)
    {
        vec.push_back(std::make_shared<int>(i));
    }
    return vec;
}

void print(const std::vector<std::shared_ptr<int>>& vec)
{
    for(auto number : vec)
    {
        std::cout << *number << " ";
    }
    std::cout << std::endl;
}

void add10(std::vector<std::shared_ptr<int>>& vec)
{
    for(auto number : vec)
    {
        if(number)
        {
            *number += 10;
        }
    }
}

void sub10(int* const wsk)
{
    if(wsk)
    {
        *wsk -= 10;
    }
}
void sub10(std::vector<std::shared_ptr<int>>& vec)
{
    for(auto number : vec)
    {
        sub10(number.get());
    }
}