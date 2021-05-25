#pragma once
#include <memory>
#include <vector>


std::vector<std::shared_ptr<int>> generate(const int);

void print(const std::vector<std::shared_ptr<int>>&);

void add10(std::vector<std::shared_ptr<int>>&);

void sub10(int* const);

void sub10(std::vector<std::shared_ptr<int>>&);