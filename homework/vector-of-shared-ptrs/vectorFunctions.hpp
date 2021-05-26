#pragma once
#include <vector>
#include <memory>

std::vector<std::shared_ptr<int>> generate(const int& count);

void print(const std::vector<std::shared_ptr<int>>& vector);

void add10(std::vector<std::shared_ptr<int>>& vector);

void sub10(int* const pointer);

void sub10(std::vector<std::shared_ptr<int>>& vector);