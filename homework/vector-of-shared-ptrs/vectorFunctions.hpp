#pragma once
#include <memory>
#include <vector>
#include <iterator>
#include <algorithm>
#include <iostream>

std::vector<std::shared_ptr<int>> generate (const size_t);

void print(std::vector<std::shared_ptr<int>>);

void add10(std::vector<std::shared_ptr<int>>);

void sub10(int* const);
void sub10(std::vector<std::shared_ptr<int>>);