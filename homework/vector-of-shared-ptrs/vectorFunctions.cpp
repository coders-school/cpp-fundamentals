#include "vectorFunctions.hpp"
#include <iostream>
std::vector<std::shared_ptr<int>> generate(int count)
{
	std::vector<std::shared_ptr<int>> v;
	for(int i=0;i<count;i++)
	{
		v.push_back(std::make_shared<int>(i));
	}
	return v;
}
void print(std::vector<std::shared_ptr<int>>& v)
{
	for(std::shared_ptr<int> element : v)
	{
		if(element)
			std::cout<<*element<<std::endl;
	}
}
void add10(std::vector<std::shared_ptr<int>>& v)
{
	for(std::shared_ptr<int> element : v)
	{
		if(element)
			*element += 10;
	}
}
void sub10(int* const p)
{
	if(p)
		*p -=10;
}
void sub10(std::vector<std::shared_ptr<int>>& v)
{
	for(std::shared_ptr<int> element : v)
	{
		sub10(element.get());
	}
}