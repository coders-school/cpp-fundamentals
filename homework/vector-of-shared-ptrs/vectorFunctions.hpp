#pragma once
#include <vector>
#include <memory>
#include <iostream>

std::vector<std::shared_ptr<int>> generate(int count);
void print(std::vector<std::shared_ptr<int>> &vecToPrint);
void add10(std::vector<std::shared_ptr<int>> &vecToAdd);
void sub10(int *const num);
void sub10(std::vector<std::shared_ptr<int>> &vecToSub);