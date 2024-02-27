#pragma once
#include <memory>
#include <vector>

std::vector<std::shared_ptr<int>> generate(int count);
void print(std::vector<std::shared_ptr<int>> printout);
void add10(std::vector<std::shared_ptr<int>> addten);
void sub10( int* const p);
void sub10(std::vector<std::shared_ptr<int>> subten);
