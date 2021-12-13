#pragma once
#include <memory>
#include <vector>

std::vector<std::shared_ptr<int>> generate (const size_t);

void print(std::vector<std::shared_ptr<int>>);

void add10(std::vector<std::shared_ptr<int>>);

void sub10(std::vector<std::shared_ptr<int>>);