#pragma once

#include <memory>
#include <vector>

std::vector<std::shared_ptr<int>> generate(int count);

using myVector = std::vector<std::shared_ptr<int>>;

void print(const myVector& vec);

void add10(myVector& vec);

void sub10(int* const value);

void sub10(myVector vec);
