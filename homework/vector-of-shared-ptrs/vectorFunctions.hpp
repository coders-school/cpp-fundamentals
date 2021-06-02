#pragma once
#include <iostream>
#include <vector>
#include <memory>

std::vector<std::shared_ptr<int>> generate(int count);
void print(std::vector<std::shared_ptr<int>> v);
void add10(std::vector<std::shared_ptr<int>> v);
void sub10(int* const v);
void sub10(std::vector<std::shared_ptr<int>> v);
