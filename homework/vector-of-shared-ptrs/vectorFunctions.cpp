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
