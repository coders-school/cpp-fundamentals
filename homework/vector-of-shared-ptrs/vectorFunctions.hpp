#pragma once
#include <vector>
#include <memory>

std::vector<std::shared_ptr<int>> generate(int count);
void print(std::vector<std::shared_ptr<int>> vector);
void add10(std::vector<std::shared_ptr<int>> vector);
void sub10(int* element);
void sub10(std::vector<std::shared_ptr<int>> vector);

