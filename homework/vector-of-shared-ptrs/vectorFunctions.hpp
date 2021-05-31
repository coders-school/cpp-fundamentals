#pragma once
#include <vector>
#include <memory>

using vector_of_ptr = std::vector<std::shared_ptr<int>>;

vector_of_ptr generate(int count);
void print(const vector_of_ptr& vec);
void add10(const vector_of_ptr& vec);
void sub10(int* integer);
void sub10(vector_of_ptr& vec);