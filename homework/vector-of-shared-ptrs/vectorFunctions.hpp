#include <iostream>

#pragma once

std::vector<std::shared_ptr<int>> generate(int count);
void print(std::vector<std::shared_ptr<int>> vecIn);
void add10(std::vector<std::shared_ptr<int>> vecIn);
void sub10(const int *a);
void sub10(std::vector<std::shared_ptr<int>> vecIn);