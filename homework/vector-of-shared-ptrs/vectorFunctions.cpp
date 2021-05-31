#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count)
{
	std::vector<std::shared_ptr<int>> vec;
	for (int i = 0; i < count; ++i) {
		vec.emplace_back(std::make_shared<int>(i));
	}
	return vec;
}
void print(std::vector<std::shared_ptr<int>> vec)
{
	if (!vec.empty()) {
		for (const auto& v : vec) {
			if (v != nullptr) {
				std::cout << *v << std::endl;
			}
		}
	}
}
void add10(std::vector<std::shared_ptr<int>> vec)
{
	if (!vec.empty()) {
		for (const auto& v : vec) {
			if (v != nullptr) {
				*v += 10;
			}
		}
	}
}
void sub10(int* const ptr)
{
	if (ptr != nullptr) {
		*ptr -= 10;
	}
}
void sub10(std::vector<std::shared_ptr<int>> vec)
{
	if (!vec.empty()) {
		for (const auto& v : vec) {
			if (v != nullptr) {
				*v -= 10;
			}
		}
	}
}