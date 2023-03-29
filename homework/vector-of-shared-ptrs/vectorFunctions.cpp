#include "vectorFunctions.hpp"
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
	
}
void add10(std::vector<std::shared_ptr<int>>& v)
{
	
}
void sub10(const int* p)
{
	
}
void sub10(std::vector<std::shared_ptr<int>>& v)
{
	
}