#include "vectorFunctions.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>

std::vector<std::shared_ptr<int>> generate(const int &amount)
{
    if (amount < 1)
    {
        std::cout << "Counter too small"
                  << "\n";
        return {};
    }
    else
    {
        std::vector<std::shared_ptr<int>> ptr_vec;
        for (int i = 0; i < amount; i++)
        {
            ptr_vec.push_back(std::make_shared<int>(i));
        }

        return ptr_vec;
    }
}

void print(const std::vector<std::shared_ptr<int>> ptr_vec_print)
{
    for (auto el : ptr_vec_print)
    {
        std::cout << *el << "\n";
    }
}

void add10(const std::vector<std::shared_ptr<int>> ptr_vec_add)
{
    for (auto el : ptr_vec_add)
    {
        if (el)
        {
            *el += 10;
        }
    }
}

void sub10(int *const ptr)
{
    if (ptr)
    {
        *ptr -= 10;
    }
}

void sub10(const std::vector<std::shared_ptr<int>> ptr_vec_sub)
{
    for (auto el : ptr_vec_sub)
    {
        if (el)
        {
            sub10(el.get());
        }
    }
}
