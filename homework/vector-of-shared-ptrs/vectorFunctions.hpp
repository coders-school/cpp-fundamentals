#pragma once

#include <memory>
#include <vector>

std::vector<std::shared_ptr<int>> generate(int count);
void print(const std::vector<std::shared_ptr<int>>& pointers);
void add10(const std::vector<std::shared_ptr<int>>& pointers);
void sub10(int* const pointer);
void sub10(const std::vector<std::shared_ptr<int>>& pointers);
