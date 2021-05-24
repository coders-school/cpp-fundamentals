#pragma once
#include <vector>
#include <memory>
#include <iostream>

// If you copy and you don't think, you're lying to yourself :)

std::vector<std::shared_ptr<int>> generate(int count);
void print(std::vector<std::shared_ptr<int>> &vecToPrint);
void add10(std::vector<std::shared_ptr<int>> &vecToAdd);
void sub10(int *const num);
void sub10(std::vector<std::shared_ptr<int>> &vecToSub);