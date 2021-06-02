#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count)
{
	std::vector< std::shared_ptr<int> > temp;

	for (int i = 0; i < count; i++)
	{
		temp.push_back(std::make_shared<int>(i));

	}
	return temp;
}

void print(std::vector<std::shared_ptr<int>> vptr)
{
	for (auto el : vptr)
	{
		std::cout << el.get();
	}
}

void add10(std::vector<std::shared_ptr<int>> vptr)
{
	for (int i = 0; i < vptr.size(); i++)
	{
		if (vptr.at(i) != nullptr) {
			int temp = *vptr.at(i);
			*vptr.at(i).get() = temp + 10;
		}
	}
}

void sub10(int* const ptr)
{
	if (ptr != nullptr) {
		*ptr = *ptr - 10;
	}
}

void sub10(std::vector<std::shared_ptr<int>> vptr)
{
	for (auto& el : vptr)
	{
		sub10(el.get());
	}
}

