#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count)
{
    std::vector<std::shared_ptr<int>> vec;
    for(int i = 0; i < count; i++ )
    {
        vec.push_back(std::make_shared<int>(i));
    }
    return vec;
}

void print(std::vector<std::shared_ptr<int>> vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		std::cout << *vec[i] << " ";
	}
}

void add10(std::vector<std::shared_ptr<int>> vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		*vec[i] += 10;
	}
}

void sub10(int* const ptr)
{
	*ptr -= 10;
}

void sub10(std::vector<std::shared_ptr<int>> vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		sub10(vec[i].get());
	}
}