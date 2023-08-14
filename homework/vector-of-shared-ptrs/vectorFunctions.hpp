#pragma once
#include <vector>
#include <memory>

std::vector<std::shared_ptr<int>> generate(int count);
void print(const std::vector<std::shared_ptr<int>>& vec);
void add10(std::vector<std::shared_ptr<int>>& vec);
void sub10(const int* ptr);
void sub10(std::vector<std::shared_ptr<int>>& vec);
