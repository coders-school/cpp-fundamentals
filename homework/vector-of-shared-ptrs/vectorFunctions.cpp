#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count)
{
    std::vector<std::shared_ptr<int>> vec;
    vec.reserve(count);
    for (int i = 0; i < count; i++)
    {
        vec.push_back(std::make_shared<int>(i));
    }
    return vec;
}
void print(std::vector<std::shared_ptr<int>> vec)
{
    for (auto element : vec)
    {
        std::cout << *element << "\n";
    }
}
void add10(std::vector<std::shared_ptr<int>> vecAdd)
{
    for (auto element : vecAdd)
    {
        if (element)
        {
            *element = *element + 10;
        }
    }
}
void sub10(int *const ptr)
{
    *ptr = *ptr - 10;
}
void sub10(std::vector<std::shared_ptr<int>> vecSub)
{
    for (auto element : vecSub)
    {
       int *const ptr = element.get();
       sub10(ptr);
    }
}