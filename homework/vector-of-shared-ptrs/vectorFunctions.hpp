#pragma once
#include <iostream>
#include <vector>
#include <memory>

std::vector<std::shared_ptr<int>> generate(int n);

void print(const std::vector<std::shared_ptr<int>>& vec);

void add10(std::vector<std::shared_ptr<int>>& vec);

void sub10(int * const val);

void sub10(std::vector<std::shared_ptr<int>>& vec);
