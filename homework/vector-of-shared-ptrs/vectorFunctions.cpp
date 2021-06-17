#include <iostream>
#include <vector>
#include <memory>
#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count)
{
	std::vector<std::shared_ptr<int>> v;
	for (int i = 0; i < count; ++i)
	{
		auto ptr = std::make_shared<int>(i);
		v.push_back(ptr);
	}
	return v;
}
void print(const std::vector<std::shared_ptr<int>>& v)
{
    for (const auto& el: v)
    {
        std::cout << *el << ' ';
    }
    std::cout << '\n';
}
void add10(const std::vector<std::shared_ptr<int>>& v)
{
    for (const auto& el : v)
    {
	if (el != nullptr)
	{
		*el += 10;	
	}
	
    }
}
void sub10(int* const ptr)
{
    if (ptr != nullptr)
    {
    	*ptr -= 10;
    }
}
void sub10(const std::vector<std::shared_ptr<int>>& v)
{
    for (const auto& el: v) 
    {
	if (el != nullptr)
	{
        	sub10(el.get());
	}
    }
}

