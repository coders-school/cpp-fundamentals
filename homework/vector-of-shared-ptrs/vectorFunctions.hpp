#pragma once
#include <vector>
#include <memory>

std::vector<std::shared_ptr<int>> generate(int count);

void print(std::vector<std::shared_ptr<int>> v);

void add10(std::vector<std::shared_ptr<int>> v);

void sub10(int *a);

void sub10(std::vector<std::shared_ptr<int>> v);