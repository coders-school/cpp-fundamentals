#include "vectorFunctions.hpp"
#include <iostream>



std::vector<std::shared_ptr<int>> generate(int count)
{
    std::vector<std::shared_ptr<int>>numbers{};
    for(int i{0}; i<count; i++)
    {
       numbers.push_back(std::make_shared<int>(i));
    }
    return numbers;
}
void print(std::vector<std::shared_ptr<int>> vec)
{
  for(const auto &el : vec)
  {
      std::cout << *el << '\n';
  }
}
void add10(std::vector<std::shared_ptr<int>> vec)
{
    for(const auto el : vec)
    {
        if(el)
        {
        *el += 10;
        }
    }
}
void sub10(int *const ptr)
{
    if(ptr)
    {
     *ptr -= 10;
    }
}
void sub10(std::vector<std::shared_ptr<int>> vec)
{
    for(auto el : vec)
    {
        sub10(el.get());
    }
}