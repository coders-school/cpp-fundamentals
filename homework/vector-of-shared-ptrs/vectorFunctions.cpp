#include "vectorFunctions.hpp"
#include <iostream>
#include <vector>
#include <memory>

std::vector<std::shared_ptr<int>> generate(int count) {
	std::vector<std::shared_ptr<int>> sharedvec;
	for (int i = 0; i < count; i++) {
		sharedvec.push_back(std::make_shared<int>(i));
	}
	return sharedvec;
}

void print(std::vector<std::shared_ptr<int>> vec) {

	for (int i = 0; i < vec.size(); i++)
	{
		std::cout << *vec.at(i) << " ";
	}
	std::cout << "\n";
}

void add10(std::vector<std::shared_ptr<int>> vec) {
	for (int i = 0; i < vec.size(); i++)
	{
        if(vec[i] != nullptr) {
            *vec[i] += 10;
        }
	}
}

void sub10(int* const vec) {
    if(vec != nullptr) {
	    *vec -= 10;
    }
}

void sub10(std::vector<std::shared_ptr<int>> vec) {
	auto ptr = vec.at(0);
	for (int i = 0; i < vec.size(); i++)
	{
		ptr = vec.at(i);
		sub10(ptr.get());
	}
}
