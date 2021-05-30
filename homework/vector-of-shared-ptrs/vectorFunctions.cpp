#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count)
{
    std::vector<std::shared_ptr<int>> vec{};
    for(int i{}; i < count; ++i)
    {
        vec.push_back(std::make_shared<int>(i));
    }
    return vec;
}

void print(std::vector<std::shared_ptr<int>> vect)
{
    for(const auto& el : vect)
        if (el)
            std::cout << *el << " ";
    std::cout << '\n';
}

void add10(std::vector<std::shared_ptr<int>> vect)
{
   for(auto& el : vect)
        if (el)
            *el += 10;
}

void sub10(int * const wsk)
{
    if(wsk)
        *wsk -= 10;
}

void sub10(std::vector<std::shared_ptr<int>> vect)
{
    for(auto& el : vect)
        if (el)
            sub10(el.get());
}
