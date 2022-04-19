#include <string>
#include <vector>
#include <memory>
#pragma once

std::vector<std::shared_ptr<int>> generate(int count);
void print(std::vector<std::shared_ptr<int>>&vec);
void add10(std::vector<std::shared_ptr<int>>&);
void sub10(int * ptr);
void sub10(std::vector<std::shared_ptr<int>>&);