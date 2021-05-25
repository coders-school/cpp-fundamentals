#include "vectorFunctions.hpp"

#include <iostream>

std::vector<std::shared_ptr<int>> generate(int count)
{
	std::vector<std::shared_ptr<int>> vec;
	vec.reserve(count);

	for (int i=0; i < count; ++i)
	{
		vec.emplace_back(std::make_shared<int>(i));
	}

	return vec;
}

void print(const std::vector<std::shared_ptr<int>>& vec)
{
	for (const auto& element : vec)
	{
		if (!element)
			continue;
		
		std::cout << *element << " ";
	}

	std::cout << std::endl;
}

void add10(std::vector<std::shared_ptr<int>>& vec)
{
	for (auto& element : vec)
	{
		if (!element)
			continue;
		
		*element += 10;
	}
}

void sub10(int* const element)
{
	if (!element)
		return;
	
	*element -= 10;
}

void sub10(std::vector<std::shared_ptr<int>>& vec)
{
	for (const auto& element : vec)
	{
		if (!element)
			continue;
		
		sub10(element.get());
	}
}
