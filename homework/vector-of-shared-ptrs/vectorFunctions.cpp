#include <iostream>
#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count)
{
    std::vector<std::shared_ptr<int>> vector;
    vector.reserve(count);
    for(size_t i {0}; i < count; ++i)
    {
        vector.push_back(std::make_shared<int>(i));
    }
    return vector;
}

void print(const std::vector<std::shared_ptr<int>>& t_Vector)
{
    for(const auto& pElement : t_Vector)
    {
        if(pElement != nullptr)
        {
            std::cout << *pElement << " ";
        }
    }
}

void add10(const std::vector<std::shared_ptr<int>>& t_Vector)
{
    for(const auto& pElement : t_Vector)
    {
        if(pElement != nullptr)
        {
            *pElement += 10;
        }
    }
}

void sub10(int* const t_pValue){
    if(t_pValue != nullptr){
        *t_pValue -= 10;
    }
}

void sub10(const std::vector<std::shared_ptr<int>>& t_Vector)
{
    for(const auto& pElement : t_Vector)
    {
        sub10(pElement.get());
    }
}
