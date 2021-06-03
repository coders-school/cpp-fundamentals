#pragma once

#include <memory>
#include <vector>

using myVector = std::vector<std::shared_ptr<int>>;

myVector generate(int count);

void print(const myVector&);

void add10(const myVector&);

void sub10(int* const);

void sub10(const myVector&);
