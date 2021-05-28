

#include <vector>
#include <memory>
#include <iostream>
#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>>generate(int count)
{
    std::vector<std::shared_ptr<int>> vec;
    for (size_t i = 0; i < count; i++)
        vec.push_back(std::make_shared<int>(i));
    return vec;
}

void print(std::vector<std::shared_ptr<int>> vec)
{
    for (const auto& el : vec)
        std::cout<<*el<<" ";
    std::cout<<"\n";
}
//void add10() która przyjmie vector i doda do każdej liczby 10

void add10(std::vector<std::shared_ptr<int>> vec)
{
    for(auto & el : vec)
        if (el != nullptr)
        {
            *el +=10;
        }
}
// void sub10() która przyjmie stały wskaźnik (zwykły) na int i odejmie od tego elementu 10
// void sub10() Która przyjmie wektor współdzielonych wskaźników i wywoła dla każdego elementu powyższe przeciążenie funkcji sub10()

void sub10(std::vector<std::shared_ptr<int>> vec)
{
    for(const auto & el : vec)
        sub10(el.get());
}
void sub10(int* const ptr)
{
    if (ptr)
    {
        *ptr -= 10;
    }
    
}
// {
//     for(auto it = vec.begin(); it != vec.end(); ++it)
//     {
//        //auto ptr = std::make_shared<int>(it);
//        std::cout<<"aa";
//        //sub10(ptr.get());
//     }
// }
// void sub10(int * ptr)
// {
//  //   *ptr -= 10;
//     std::cout<<"aaa";
// }