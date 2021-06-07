#include <iostream>
#include <memory>
#include <vector>

#pragma once

std::vector<std::shared_ptr<int>> generate(int count);
void print(std::vector<std::shared_ptr<int>> vecIn);
void add10(std::vector<std::shared_ptr<int>> vecIn);
void sub10( int * const a);
void sub10(std::vector<std::shared_ptr<int>> vecIn);