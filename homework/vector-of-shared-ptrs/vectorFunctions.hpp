#pragma once
#include <algorithm>
#include <memory>
#include <vector>
#include <iostream>

std::vector<std::shared_ptr<int>> generate(int);
void print(const std::vector<std::shared_ptr<int>>&);
void add10(const std::vector<std::shared_ptr<int>>&);