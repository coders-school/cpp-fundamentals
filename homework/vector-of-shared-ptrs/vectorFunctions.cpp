

#include <vector>
#include <memory>
#include <iostream>
#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>>generate(int count)
{
    std::vector<std::shared_ptr<int>> vec;
    vec.reserve(count);
    for (size_t i = 0; i < count; i++)
        vec.push_back(std::make_shared<int>(i));
    return vec;
}

void print(std::vector<std::shared_ptr<int>> vec)
{
  for (const auto& el : vec)
     std::cout<<*el;  
}

void add10(std::vector<std::shared_ptr<int>> vec)
{
    // std::vector<std::shared_ptr<int>> vec1;
    // vec1.reserve(vec.size());
    // int i = 0;
    // // for (auto it = vec1.begin(); it != vec1.end(); ++it)
    // //     {
    // //         vec1
    // //     }

    // for (size_t i = 0; i < vec.size(); i++)
    //     vec1.push_back(vec[i] + 10);

}

