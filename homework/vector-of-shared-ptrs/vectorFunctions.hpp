#pragma once
#include <vector>
#include <memory>

std::vector<std::shared_ptr<int>> generate(int count);
void print(auto printout);
void add10(auto addten);
void sub10( int * const p);
void sub10(std::vector<std::shared_ptr<int>>  subten);
