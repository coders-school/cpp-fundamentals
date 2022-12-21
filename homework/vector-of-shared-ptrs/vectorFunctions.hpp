#pragma once
#include <iostream>
#include <memory>
#include <vector>

std::vector<std::shared_ptr<int>> generate(const int&);
void print(const std::vector<std::shared_ptr<int>>&);
void add10(const std::vector<std::shared_ptr<int>>&);
void sub10(int* const &);
void sub10(const std::vector<std::shared_ptr<int>>&);