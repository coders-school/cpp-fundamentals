#pragma once

#include <memory>
#include <vector>

using shared_pointers = std::vector<std::shared_ptr<int>>;

std::vector<std::shared_ptr<int>> generate(int count);
void print(const shared_pointers& pointers);
void add10(const shared_pointers& pointers);
void sub10(int* const pointer);
void sub10(const shared_pointers& pointers);
